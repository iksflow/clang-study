#include <stdio.h>

// 함수의 선언과 정의를 동시에 하는것도 가능.
int multiply(int n1, int n2) { return n1 * n2; }

int main(void) {
  int a = 10;
  int b = 5;
  printf("a * b = %d\n", multiply(a, b));
}
