#include <stdio.h>
void swap(int a, int b) {
  // 값에 의한 호출(call by value)이기 때문에 main의 a, b와는 전혀 다른 변수임.
  printf("swap() 함수 안에서 a의 주소 : %p\n", &a);
  printf("swap() 함수 안에서 b의 주소 : %p\n", &b);
  int temp = a;
  a = b;
  b = temp;
  printf("swap() 함수 안 => a : %d, b : %d\n", a, b);
};

void swap_addr(int *a, int *b) {
  // 참조에 의한 호출(call by reference)이기 때문에 main의 a, b와 같은 변수임(=주소가 같다).
  printf("swap_addr() 함수 안에서 a의 주소 : %p\n", a);
  printf("swap_addr() 함수 안에서 b의 주소 : %p\n", b);
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("swap_addr() 함수 안 => a : %d, b : %d\n", *a, *b);
}
int main(void) {
  int a = 10;
  int b = 20;
  printf("a의 주소 : %p\n", &a);
  printf("b의 주소 : %p\n", &b);
  printf("swap() 함수 호출 전 => a : %d, b : %d\n", a, b);
  swap(a, b);
  printf("swap() 함수 호출 후 => a : %d, b : %d\n", a, b);

  printf("swap_addr() 함수 호출 전 => a : %d, b : %d\n", a, b);
  swap_addr(&a, &b);
  printf("swap_addr() 함수 호출 후 => a : %d, b : %d\n", a, b);
}