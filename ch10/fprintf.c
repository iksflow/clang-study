#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void) {
  char *pwd = getcwd(NULL, 100);
  char *filename = "/sample2.txt";
  char *fullPath = strcat(pwd, filename);
  FILE *file = fopen(fullPath, "wb");
  if (file == NULL) {
    printf("파일 열기 실패\n");
    return 1;
  }
  // 형식에 맞게 파일에 데이터를 입력한다.
  fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
  fprintf(file, "%s %d\n", "보너스번호 ", 7);
  fclose(file);
  return 0;
}