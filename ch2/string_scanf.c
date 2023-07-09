#include <stdio.h>
int main(void) {
  char str[256];
  printf("문자열을 입력하세요 : ");
  scanf("%s", str);
  printf("%s\n", str);
  return 0;
}