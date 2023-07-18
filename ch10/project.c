#include <stdio.h>
#include <string.h>
#include <unistd.h>
/*
#include <conio.h> // _getch함수를 포함하는 conio.h는 표준 라이브러리가 아니기 때문에 XCode에 포함되어있지 않아
사용할 수 없음.
getchar: 키 입력 + Enter 해야 저장.
_getch: 키 입력시 바로 저장.
*/
#define MAX 10000

int main(void) {
  char password[20];
  char c;
  int i = 0;
  char line[MAX];
  char contents[MAX] = "";

  printf("비밀 일기에 오신 것을 환영합니다.\n");
  printf("비밀번호를 입력하세요(최대 20자리). : ");
  while (1) {
    c = getchar();
    // printf("keydown:: %d\n", c);
    // windows에서는 13인데 mac에서는 10이 enter key
    if (c == 10) {
      password[i] = '\0';
      break;
    } else {
      printf("*");
      password[i] = c;
    }
    i++;
  }

  // 비밀번호: skehzheld
  printf("\n\n=== 비밀번호 확인 중 ===\n\n");

  if (strcmp(password, "skehzheld") == 0) { // 비밀번호가 맞았을 때
    printf("\n\n=== 비밀번호 확인 완료 ===\n\n");
    char *pwd = getcwd(NULL, 100);
    char *fileName = strcat(pwd, "/project.txt");
    FILE *file = fopen(fileName, "a+b");
    if (file == NULL) {
      printf("파일 열기 실패\n");
      return 1;
    }
    while (fgets(line, MAX, file) != NULL) { // 파일 읽어 오기
      printf("%s", line);
    }
    printf("\n\n내용을 계속 작성하세요! 종료하려면 EXIT를 입력하세요.\n\n");
    while (1) {
      scanf("%[^\n]", contents); // 줄바꿈 문자(\n) 전까지 읽어 옴(한 문장씩)
      getchar();
      if (strcmp(contents, "EXIT") == 0) {
        printf("비밀 일기 입력을 종료합니다.\n\n");
        break;
      }
      fputs(contents, file);
      fputs("\n", file);
    }
    fclose(file);
  } else { // 비밀번호가 틀렸을 때
    printf("=== 비밀번호가 틀렸어요. ===\n\n");
  }
  return 0;
}