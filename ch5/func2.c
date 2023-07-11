#include <stdio.h>

int add(int n1, int n2);

int main(void) {
  int num1 = 10;
  int num2 = 20;
  printf("num1 + num2 = %d\n", add(num1, num2));
  return 0;
}

int add(int n1, int n2) { return n1 + n2; }