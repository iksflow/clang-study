#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // 난수 초기화 - 안하면 계속 같은값이 나오게 됨.
  srand(time(NULL));
  // 0~2
  int rnumber = rand() % 3;
  printf("%d\n", rnumber);
  return 0;
}