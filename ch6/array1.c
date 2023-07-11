#include <stdio.h>

int main(void) {
  int size = 3;
  int arr[size];
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;

  for (int i = 0; i < 3; i++) {
    printf("%d 번째 요소: %d\n", i, arr[i]);
  }

  printf("배열 길이로 출력하기\n");
  for (int i = 0; i < size; i++) {
    printf("%d 번째 요소: %d\n", i, arr[i]);
  }

  return 0;
}