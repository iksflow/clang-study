#include <stdio.h>

struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;
  struct GameInfo *friendGame;
};

int main(void) {
  struct GameInfo gameInfo1 = {"나도게임", 2022, 50, "나도회사"};
  struct GameInfo gameInfo2 = {"너도게임", 2022, 100, "너도회사"};
  // gameInfo2변수의 주소를 대입해야 함.
  gameInfo1.friendGame = &gameInfo2;

  // 구조체 안의 구조체의 데이터를 출력하려면 간접 멤버 참조 연산자인 화살표를 사용하면 된다.
  printf("-- 다른 회사의 게임 출시 정보--\n");
  printf("게임 이름: %s\n", gameInfo1.friendGame->name);
  printf("발매 연도: %d\n", gameInfo1.friendGame->year);
  printf("게임 가격: %d\n", gameInfo1.friendGame->price);
  printf("제작 회사: %s\n", gameInfo1.friendGame->company);

  return 0;
}
