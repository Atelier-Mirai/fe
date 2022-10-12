#include <stdio.h>

// p420
// Ack関数
int ack(int m, int n){
  if (m > 0 && n > 0) {
    return ack(m-1, ack(m, n-1));
  } else if (m > 0 && n == 0) {
    return ack(m-1, 1);
  } else if (m == 0) {
    return n + 1;
  }
  return 0;
}

// メイン関数
int main() {
  int m, n;

  // 無限ループ
  while(1){
    printf("m を入力してください (終了: -1) ");
    scanf("%d", &m);
    printf("n を入力してください (終了: -1) ");
    scanf("%d", &n);

    if (n >= 0){
      // Ack表示
      printf("%d\n\n", ack(m, n));
    } else {
      break; // 無限ループから脱出
    }
  }
  printf("プログラムを終了します\n");
}
