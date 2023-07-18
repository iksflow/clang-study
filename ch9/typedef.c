#include <stdio.h>

// Case 1. 구조체를 먼저 선언하고 코드에서 typedef struct Gameinfo GI 라고 별명을 정하는 방법.
struct GameInfo {
  char *name;
  int year;
  int price;
  char *company;
};

// Case 2. 구조체를 선언할 때 typedef를 붙이고 NGI 라고 별명을 정하는 방법.
typedef struct NewGameInfo {
  char *name;
  int year;
  int price;
  char *company;
} NGI;

// Case 3. 이름이 없는 구조체를 선언하고 typedef로 별명만 붙이는 방법. (많이 사용하는 방법)
typedef struct {
  char *name;
  int year;
  int price;
  char *company;
} AGI;

int main(void) {
  typedef struct GameInfo GI;
  GI gi1 = {"나도게임", 2022, 50, "나도회사"};
  printf("----- 게임 출시 정보-----\n");
  printf("게임 이름: %s\n", gi1.name);
  printf("발매 연도: %d\n", gi1.year);
  printf("게임 가격: %d\n", gi1.price);
  printf("제작 회사: %s\n", gi1.company);

  NGI ngi = {"너도게임", 2022, 100, "너도회사"};
  printf("----- 다른 게임 출시 정보-----\n");
  printf("게임 이름: %s\n", ngi.name);
  printf("발매 연도: %d\n", ngi.year);
  printf("게임 가격: %d\n", ngi.price);
  printf("제작 회사: %s\n", ngi.company);

  AGI agi = {"몰라게임", 2022, 100, "몰라회사"};
  printf("----- 몰라 게임 출시 정보-----\n");
  printf("게임 이름: %s\n", agi.name);
  printf("발매 연도: %d\n", agi.year);
  printf("게임 가격: %d\n", agi.price);
  printf("제작 회사: %s\n", agi.company);
  return 0;
}
