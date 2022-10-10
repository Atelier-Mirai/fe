#include <stdio.h>

// 関数 add の宣言
// 仮引数 x は 値呼び出し
// 仮引数 y は 参照呼び出し
void add(int x, int *y);

// プログラムはメイン関数から始まる
int main() {
  int x = 2; // 整数型の変数 x の宣言と、初期値の代入
  int y = 2; // 整数型の変数 y の宣言と、初期値の代入

  printf("main xのアドレス: %p, xの値: %d\n", &x, x);
  printf("main yのアドレス: %p, yの値: %d\n", &y, y);
  printf("----------------------------\n");

  // 関数 add の呼び出し
  add(x, &y);

  printf("----------------------------\n");
  printf("main xのアドレス: %p, xの値: %d\n", &x, x);
  printf("main yのアドレス: %p, yの値: %d\n", &y, y);
}

// 関数 add の定義
void add(int x, int *y) {
  printf("add  xのアドレス: %p, xの値: %d\n", &x, x);
  printf("add  yのアドレス: %p, yの値: %d\n", &y, *y);

  x = x + *y;
  printf("add  xのアドレス: %p, xの値: %d\n", &x, x);
  printf("add  yのアドレス: %p, yの値: %d\n", &y, *y);

  *y = x + *y;
  printf("add  xのアドレス: %p, xの値: %d\n", &x, x);
  printf("add  yのアドレス: %p, yの値: %d\n", &y, *y);
}