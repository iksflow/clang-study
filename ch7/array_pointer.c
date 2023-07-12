#include <stdio.h>
int main(void) {
  int arr[3] = {5, 10, 15};
  for (int i = 0; i < 3; i++) {
    printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
  }

  // arr은 배열 arr의 첫번째 요소의 주소와 같다.
  int *ptr = arr;
  printf("*arr : %d\n", *arr); // 5
  printf("arr : %p\n", arr);
  printf("&arr[0] : %p\n", &arr[0]);

  for (int i = 0; i < 3; i++) {
    printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]);
  }

  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300;

  for (int i = 0; i < 3; i++) {
    printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]);
  }
  // arr[1] : arr 첫 번째 요소의 주소로 부터 1번째에 해당하는 요소의 값을 가져온다.
  // = *(arr + 1) : 동일한 의미
  printf("arr[1] : %d\n", arr[1]);         // 200
  printf("*(arr + 1) : %d\n", *(arr + 1)); // 200
  return 0;
}