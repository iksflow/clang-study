#include <stdio.h>

struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;
};

int main(void) {
  struct GameInfo gameInfo1;
  gameInfo1.name = "나도게임";
  gameInfo1.year = 2022;
  gameInfo1.price = 50;
  gameInfo1.company = "나도회사";

  struct GameInfo *gamePtr;
  gamePtr = &gameInfo1;

  printf("-- 미션맨의 게임 출시 정보 --\n");
  printf("게임 이름 : %s\n", (*gamePtr).name);
  printf("발매 연도 : %d\n", (*gamePtr).year);
  printf("게임 가격 : %d\n", (*gamePtr).price);
  printf("제작 회사 : %s\n", (*gamePtr).company);

  // 동일한 내용을 화살표(간접멤버 참조 연산자)로 간결하게 표현할 수 있다. 주소값을 그대로 사용한다는 차이가 있다.
  printf("게임 이름 : %s\n", gamePtr->name);
  printf("발매 연도 : %d\n", gamePtr->year);
  printf("게임 가격 : %d\n", gamePtr->price);
  printf("제작 회사 : %s\n", gamePtr->company);
  return 0;
}