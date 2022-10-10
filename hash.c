#include <stdio.h>

// p400
// ハッシュ法 

// ハッシュ関数の宣言
int hash(int number); 
int hash2(int number); 

int main() {
  int a[13] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
  int x; // 目的のデータ
  int i; // 添字(配列への格納位置)

  // 格納したいデータ
  x = 54321;
  printf("目的のデータ %d を 格納します\n", x);

  // ハッシュ関数を用いて、格納位置を算出する
  i = hash(x);

  // 配列の格納位置 i に x を格納する
  a[i] = x;

  // 格納状況を表示する
  printf("格納状況は次の通りです\n");
  for (i = 0; i < 13; i++){
    printf("a[%2d] %5d\n", i, a[i]);
  }
  printf("\n");



  // 格納したいデータ その２
  x = 12345;
  printf("目的のデータ %d を 格納します\n", x);

  // ハッシュ関数(改良版)を用いて、格納位置を算出する
  i = hash2(x);

  // 配列の格納位置 i に x を格納する
  a[i] = x;

  // 格納状況を表示する
  // 衝突が発生していることが確認できる
  printf("格納状況は次の通りです\n");
  for (i = 0; i < 13; i++){
    printf("a[%2d] %5d\n", i, a[i]);
  }
}

// ハッシュ関数の本体
int hash(int number) {
  // 五桁の数 a5a4a3a2a1を、
  // mod(a5+a4+a3+a2+a1, 13)というハッシュ関数を用いて
  // 配列への格納位置を算出する

  int a5, a4, a3, a2, a1;
  int sum;

  a1     = number % 10; // 10で割った余り
  number = number / 10; // 10で割った整数部を自身に再代入
  a2     = number % 10; // 10で割った余り
  number = number / 10; // 10で割った整数部を自身に再代入
  a3     = number % 10; // 10で割った余り
  number = number / 10; // 10で割った整数部を自身に再代入
  a4     = number % 10; // 10で割った余り
  number = number / 10; // 10で割った整数部を自身に再代入
  a5     = number % 10; // 10で割った余り
  number = number / 10; // 10で割った整数部を自身に再代入

  sum    = a1 + a2 + a3 + a4 + a5; 

  printf("  各桁の状況です\n");
  printf("  %d %d %d %d %d\n", a5, a4, a3, a2, a1);
  printf("  各桁の合計は %d です。\n", sum);

  return sum % 13;
}

// ハッシュ関数 改良版
int hash2(int number) {
  int j;            // 10進整数
  int nishin[8+1];  // 二進数を入れる配列
  int k;            // 二進数の何桁目か？

  int sum = 0;
  j = number;

  for (k = 1; k <= 8; k++) {
    nishin[k] = j % 10;     // 二で割った余りをnishin[k]に代入
    j = j / 10;             // j を 二で割った商の整数部分

    sum = sum + nishin[k];  // ついでに各桁の和も算出する
  }

  printf("  各桁の状況です\n");
  printf("  %d %d %d %d %d %d %d %d\n", nishin[8],
          nishin[7],
          nishin[6],
          nishin[5],
          nishin[4],
          nishin[3],
          nishin[2],
          nishin[1]);
  printf("  各桁の合計は %d です。\n", sum);

  return sum % 13;      // 13で割った余りを返す
}