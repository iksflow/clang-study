#include <stdio.h>

int main(void) {
  int arr[10];
  // 값을 초기화하지 않은 경우 쓰레기 값(garbage value)이 나온다.
  for (int i = 0; i < 10; i++) {
    printf("%d번째 요소의 값: %d\n", i, arr[i]);
  }

  // 선언과 동시에 일부 값을 초기화한 경우 나머지 값은 전부 0이 기본값으로 들어감.
  int arr2[10] = {1, 2};
  for (int i = 0; i < 10; i++) {
    printf("%d번째 요소의 값: %d\n", i, arr2[i]);
  }

  return 0;
}