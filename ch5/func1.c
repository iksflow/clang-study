#include <stdio.h>

// main 이전에 반드시 선언되어 있어야함!
void p(int num);

int main(void) {
  int num = 2;
  p(num);
}
// 함수는 main 위, 아래 어디에 정의하던 동작하지만 일반적으로 main 아래에 정의한다.
void p(int num) { printf("num = %d 이다.\n", num); }