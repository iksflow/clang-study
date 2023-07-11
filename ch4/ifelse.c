#include <stdio.h>
int main(void) {
  int age;
  printf("당신은 몇 살입니까?");
  scanf("%d", &age);
  if (age >= 20) {
    printf("성인입니다.\n");
  } else if (14 <= age && age < 17) {
    printf("중학생입니다.\n");
  } else if (17 <= age && age < 20) {
    printf("고등학생입니다.\n");
  } else {
    printf("초딩입니다.\n");
  }

  return 0;
}