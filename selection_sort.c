#include <stdio.h>

// p408
// 基本選択法（選択ソート）

// 交換用関数
void swap(int *x, int *y);

// 配列表示関数
void print_array(int *a, int n, int i, int j);

// メイン関数
int main() {
  int i, j;                                 // 整数型の変数 i, j を宣言
  int n = 7;                                // n の宣言と初期化
  int a[] = { 10, 99, 51, 16, 27, 77, 6 };  // 並び替え対象の配列
  int min, idx, min_idx;

  for (i = 0; i < n; i++) { // 先頭から何番目まで確定しているか
    min     = a[i];
    min_idx = i;
    for (j = i; j < n; j++) { // 確定した処から最後の要素までの間で
                              // 最大値を探し、入れ替える
      // 最小値を探す
      if (a[j] < min) {
        min = a[j];
        min_idx = j;
      }
    }

    print_array(a, n, i, j);

    // 最小値の要素を示す添字が、確定位置の袖時でなければ入れ替える
    if (min_idx != i) {
      printf("  a[%d]=%2d と a[%d]=%2d を入れ替えます\n", min_idx, a[min_idx], i, a[i]);
      swap(&a[min_idx], &a[i]);
    } else {
      printf("\n");
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
