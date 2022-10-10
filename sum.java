// https://paiza.io/projects/XlE8-P9Gbod-D-hgDskSJA
// で実行できます。

import java.util.*;

// 1 から 10 までの合計を求める 
public class Main {
  public static void main(String[] args) throws Exception {
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i = i + 1) {
      sum = sum + i;
    }
    System.out.printf("1 から 10 までの合計は %d です。\n", sum);
  }
}
