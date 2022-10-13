#include <stdio.h>
#include <limits.h>

#include "p410_shellsort.c" // 他のファイルに書かれたコードを呼び出す
#include "p410_quicksort.c"
#include "p411_heapsort.c"

// p410-411
// シェルソート / クイックソート / ヒープソート

// 配列表示関数
void print_array(int *a, int n);

// メイン関数
int main() {
  int n         = 7; // 配列の要素数
  int a_shell[] = { 10, 99, 51, 16, 27, 77, 6 }; // 並び替え対象の配列
  int a_quick[] = { 10, 99, 51, 16, 27, 77, 6 };
  int a_heap[]  = { INT_MIN, 10, 99, 51, 16, 27, 77, 6 };

  // シェルソートを呼び出す
  shellsort(7, a_shell);
  printf("並び替えが完了しました\n");
  print_array(a_shell, n);

  // クイックートを呼び出す
  quicksort(a_quick, 0, n-1);
  printf("並び替えが完了しました\n");
  print_array(a_quick, n);

  // ヒープソートを呼び出す
  quicksort(a_heap, 0, n-1);
  printf("並び替えが完了しました\n");
  print_array(a_heap, n);
}

// 配列表示関数
void print_array(int *a, int n) {
  int idx;
  for (idx = 0; idx < n; idx++) {
    printf("%d ", a[idx]);
  }
  printf("\n");
}
