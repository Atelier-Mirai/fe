#include <stdio.h>

// p369の下の吹き出し
// 1から10までの合計を求めるプログラム

int main() {
  int start_number = 1; // 開始番号
  int end_number = 10;  // 終了番号
  int sum;              // 合計

  // 総和の公式より
  // 加算は + 演算子
  // 減算は - 演算子
  // 乗算は * 演算子
  // 除算は / 演算子
  // 剰余算は % 演算子を用いる。
  sum = (start_number + end_number) * (end_number - start_number + 1) / 2;

  printf("%dから%dまでの合計は %d です\n", start_number, end_number, sum);
}
