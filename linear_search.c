#include <stdio.h>

// p396
// 線形探索法

int main() {
  int i;      // 添字
  int a[] = { 0, 7, 4, 2, 8, 10, 9, 1, 5, 3, 6 }; // 探索対象の配列
  int n = 10; // 添字の最大値
  int x;      // 目的のデータ

  printf(" 探したい数 x を入力してください: ");
  scanf("%d", &x);
  printf("\n");

  // 配列a[i]の値が目的のデータxと等しくない
  // 且つ
  // 変数iが添字の最大値n以下である間
  // ぐるぐるループ
  for (i = 1; a[i] != x && i <= n; i++) {
  }

  if (i <= n) {
    // i が n 以下
    printf("a[%d]が%dでした\n", i, a[i]);
  } else {
    // i が n より大きい
    printf("%dは存在しませんでした\n", x);
  }
}
