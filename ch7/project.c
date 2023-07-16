#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level;
int arrayFish[6];
int *cursor;

void initData() {
  level = 1;
  for (int i = 0; i < 6; i++) {
    arrayFish[i] = 100;
  }
}

void printFishes() {
  printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
  for (int i = 0; i < 6; i++) {
    printf("  %3d ", arrayFish[i]);
  }
  printf("\n\n");
}

void decreaseWater(long elapsedTime) {
  for (int i = 0; i < 6; i++) {
    arrayFish[i] -= (level * 3 * (int)elapsedTime);
    if (arrayFish[i] < 0) {
      arrayFish[i] = 0;
    }
  }
}
int checkFishAlive() {
  for (int i = 0; i < 6; i++) {
    if (arrayFish[i] > 0) {
      return 1; // 참(true)
    }
  }
  return 0;
}

int main(void) {
  long startTime = 0;
  int num;
  long totalElapsedTime = 0;
  long prevElapsedTime = 0;
  long perMiliSec = 1000;

  initData();
  startTime = clock();
  cursor = arrayFish;
  while (1) {
    printFishes();
    printf("몇 번 어항에 물을 줄까요?(1~6) ");
    scanf("%d", &num);
    if (num < 1 || num > 6) {
      printf("\n입력값이 잘못됐습니다.\n");
      continue;
    }

    totalElapsedTime = (clock() - startTime) / perMiliSec;
    printf("총 경과 시간 : %ld초\n", totalElapsedTime);
    prevElapsedTime = totalElapsedTime - prevElapsedTime;

    printf("최근 경과 시간 : %ld초\n", prevElapsedTime);
    decreaseWater(prevElapsedTime);
    if (cursor[num - 1] <= 0) {
      printf("%d 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
    } else if (cursor[num - 1] + 1 <= 100) {
      printf("%d 어항에 물을 줍니다.\n\n", num);
      // 물을 주는 물 높이 + 1(cursor[num - 1] = cursor[num - 1] + 1)
      cursor[num - 1] += 1;
    }
    if (totalElapsedTime / 20 > level - 1) {
      level++;
      printf("***축하합니다. %d레벨에서 %d레벨로 올랐습니다. ***\n\n", level - 1, level);
      if (level == 5) {
        printf("\n\n 축하합니다. 최고 레벨을 ekf성했습니다. 게임을 종료합니다. \n\n");
        exit(0);
      }
    }
    if (checkFishAlive() == 0) {
      printf("모든 물고기가 죽었습니다. ㅠㅠ\n\n");
      exit(0);
    } else {
      printf("물고기가 아직 살아 있어요!\n\n");
    }
    prevElapsedTime = totalElapsedTime;
  }

  return 0;
}