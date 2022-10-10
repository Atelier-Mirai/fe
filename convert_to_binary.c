#include <stdio.h>

// p372
// 10進整数 j (0 < j < 100) を 8桁の二進数に変換する

int main() {
  char j;           // 10進整数
  int nishin[8+1];  // 二進数を入れる配列
  int k;            // 二進数の何桁目か？

  printf(" 10進整数 j (0 < j < 100) を入力してください: ");
  scanf("%c", &j);
  printf("\n");

  for (k = 1; k <= 8; k++){
    nishin[k] = j % 2;  // 二で割った余りをnishin[k]に代入
    j = j / 2;          // j を 二で割った商の整数部分
  }

  printf("%d %d %d %d %d %d %d %d\n", nishin[8],
                                      nishin[7],
                                      nishin[6],
                                      nishin[5],
                                      nishin[4],
                                      nishin[3],
                                      nishin[2],
                                      nishin[1]);
}
