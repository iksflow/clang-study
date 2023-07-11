#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  int i = rand() % 3;
  switch (i) {
  case 0:
    printf("가위!");
    break;
  case 1:
    printf("바위!");
    break;
  case 2:
    printf("보!");
    break;
  default:
    break;
  }
  return 0;
}