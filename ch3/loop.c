#include <stdio.h>

int main(void) {

  for (int i = 1; i < 11; i++) {
    printf("Hello World! %d\n", i);
  }

  int j = 1;
  while (j <= 10) {
    printf("Bye World! %d\n", j);
    j++;
  }

  return 0;
}