#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define MAX 10000

int main(void) {
  // 현재 경로
  char *pwd = getcwd(NULL, 100);
  char *filename = "/sample.txt";
  char *fullPath = strcat(pwd, filename);
  char line[MAX];

  FILE *file = fopen(fullPath, "rb");
  if (file == NULL) {
    printf("파일 열기 실패\n");
    return 1;
  }

  while (fgets(line, MAX, file) != NULL) {
    printf("%s", line);
  }

  // 입력이 끝나면 파일을 닫아줘야함.
  fclose(file);
  return 0;
}