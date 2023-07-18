#include <stdio.h>

// 구조체 - 사용자 정의 자료형(UDT, User-defined Data Type)
struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;
};

int main(void) {
  // char *name = "나도게임";
  // int year = 2022;
  // int price = 50;
  // char *company = "나도회사";

  // char *name = "너도게임";
  // int year = 2022;
  // int price = 100;
  // char *company = "너도회사";

  struct GameInfo gameInfo1;
  gameInfo1.name = "나도게임";
  gameInfo1.year = 2022;
  gameInfo1.price = 50;
  gameInfo1.company = "나도회사";

  // 이렇게 초기화하는 것도 가능
  struct GameInfo gameInfo2 = {"너도게임", 2022, 100, "너도회사"};

  // 배열도 가능
  struct GameInfo gameArray[2] = {{"나도게임", 2022, 50, "나도회사"}, {"너도게임", 2022, 100, "너도회사"}};

  // 구조체 멤버 출력
  printf("-- 게임 출시 정보 --\n");
  printf("게임 이름 : %s\n", gameInfo1.name);
  printf("발매 연도 : %d\n", gameInfo1.year);
  printf("게임 가격 : %d\n", gameInfo1.price);
  printf("제작 회사 : %s\n", gameInfo1.company);
  printf("-- 또 다른 게임 출시 정보 --\n");
  printf("게임 이름 : %s\n", gameInfo2.name);
  printf("발매 연도 : %d\n", gameInfo2.year);
  printf("게임 가격 : %d\n", gameInfo2.price);
  printf("제작 회사 : %s\n", gameInfo2.company);

  return 0;
}