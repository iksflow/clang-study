#include <stdio.h>
int main(void) {
  int adam = 0;
  int john = 1;
  int chloe = 2;
  // 포인터 변수(=변수의 주소)의 값을 출력하려면 %p 를 사용한다.
  printf("adam's address: %p, value: %d\n", &adam, adam);
  printf("john's address: %p, value: %d\n", &john, john);
  printf("chloe's address: %p, value: %d\n", &chloe, chloe);

  // 포인터 변수는 [자료형 *변수의 = &변수] 의 형태로 선언 및 정의한다.
  int *adam_address = &adam;

  // 포인터 변수의 값은 %p로 출력할 수 있다. [*포인터 변수] 로 입력하면 변수의 값이 나온다.
  printf("adam's address: %p, value: %d\n", adam_address, *adam_address);

  // 포인터 변수를 활용해 값을 변경할 수도 있다.
  *adam_address = *adam_address + 10;
  printf("adam's value: %d\n", adam); // 10
  return 0;
}