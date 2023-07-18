#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void) {
  // 현재 경로
  char *pwd = getcwd(NULL, 100);
  char *filename = "/sample.txt";
  char *fullPath = strcat(pwd, filename);

  FILE *file = fopen(fullPath, "wb");
  if (file == NULL) {
    printf("파일 열기 실패\n");
    return 1;
  }
  // 파일에 데이터를 입력.
  fputs("fputs() 함수로 글을 써 볼게요. \n", file);
  fputs("잘 써지는지 확인해 주세요. \n", file);

  // 입력이 끝나면 파일을 닫아줘야함.
  fclose(file);
  return 0;
}