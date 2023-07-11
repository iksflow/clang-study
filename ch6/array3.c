#include <stdio.h>
int main(void) {
  char str[6] = "coding";
  printf("%s\n", str);

  char str2[] = "HelloWorld";
  // sizeof 결과값이 long이라 %ld로 표현,
  // size: 11 로 나오는 이유는 문자열의 마지막에는 \0(null)값이 포함되기 때문
  printf("size: %ld, %s\n", sizeof(str2), str2);
}