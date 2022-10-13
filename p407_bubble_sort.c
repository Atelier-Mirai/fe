#include <stdio.h>

// p407
// 基本交換法（バブルソート）

// 交換用関数
void swap(int *x, int *y);

// 配列表示関数
void print_array(int *a, int n, int i, int j);

// メイン関数
int main() {
  int i, j;                                 // 整数型の変数 i, j を宣言
  int n = 7;                                // n の宣言と初期化
  int a[] = { 10, 99, 51, 16, 27, 77, 6 };  // 並び替え対象の配列

  for (i = 0; i < n; i++) {
    for (j = 0; j < n-i-1; j++) {
      print_array(a, n, i, j);

      if (a[j] > a[j+1]) {
        // a[j]とa[j+1]の値を入れ替える
        printf("  a[%d]=%2d と a[%d]=%2d を入れ替えます\n", j, a[j], j+1, a[j+1]);
        swap(&a[j], &a[j+1]);
      } else {
        printf("\n");
      }
    }
  }

  printf("並び替えが完了しました\n");
  print_array(a, n, i, j);
  printf("\n");
}

// 交換用関数
void swap(int *x, int *y){
  int w;  // 作業用変数
  w  = *x;
  *x = *y;
  *y = w;
}

// 配列表示関数
void print_array(int *a, int n, int i, int j) {
  printf("i=%d j=%d   ", i, j);
  int idx;
  for (idx = 0; idx < n; idx++) {
    printf("%d ", a[idx]);
  }
}
