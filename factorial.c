#include <stdio.h>

// p418
// 階乗を求める

// 再帰を用いた例
unsigned long long factorial(unsigned int n){
  if (n > 0) {
    return n * factorial(n - 1);
  }
  return 1; // 0! == 1
}

// 一つの関数内に閉じた 繰り返し構造とした例
unsigned long long factorial2(unsigned int n){
  unsigned long long f = 1;
  for (; n > 0; n--){
    f = f * n;
  }
  return f;
}

// メイン関数
int main() {
  int n;

  // 無限ループ
  while(1){
    printf("いくつの階乗を求めますか？ (終了: -1) ");
    scanf("%d", &n);

    if (n >= 0){
      // 階乗表示
      printf("%llu\n\n", factorial(n));
      // printf("%llu\n\n", factorial2(n));
    } else {
      break; // 無限ループから脱出
    }
  }
  printf("プログラムを終了します\n");

  // 20! は 約243京(2.43 * 10^12)である
  // 243 2902 0081 7664 0000
  // 21! は 約5109京(5.109 * 10^12)である
  // 5109 0942 1717 0944 0000
  // unsigned long long 型 は、
  // 0 〜 2^64 - 1
  // 1844 6744 0737 0955 1615
  // までの数しか表現できないため、
  // 桁あふれ（オーバーフロー）を起こす
  // 1419 7454 0242 9033 6768
  // と表示されるが、不正な値である。
}
