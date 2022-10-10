#include <stdio.h>

// p369
// 1から10までの合計を求めるプログラム
// goto文使用

int main() {
  int x;
  int i;

  x = 0; // 合計を入れる為の変数 x を 0 で初期化
  i = 1; // 足し込んでいく数 i を 1 で初期化

loop_start:

  if (i > 10) {
    goto loop_end; // i > 10 なら loop_end へ飛ぶ
  } else {
    x = x + i;
    i = i + 1;
    goto loop_start; // そうでなければ、x, i を更新後、
                     // loop_start へ飛ぶ
  }

loop_end:

  printf("1から10までの合計は %d です\n", x);
}
