// 전처리기 지시문(preprocessor directive) # 으로 시작
#include <stdio.h>

int main(void) {
  int age = 20;
  printf("Age is %d\n", age); // %d 같은 것들은 서식 지정자(format specifier)

  float f = 46.5f;
  printf("%f\n", f);   // default 소수점 6자리 까지. 46.500000
  printf("%.2f\n", f); // %.2f 소수점 2자리. 46.50

  double d = 4.428;     // float과 다르게 뒤에 f 같은 문자를 안붙임.
  printf("%lf\n", d);   // default 소수점 6자리 까지. 4.428000
  printf("%.2lf\n", d); // 소수점 2자리 까지. 반올림해서 4.43

  const YEAR = 1972;
  printf("C언어의 발표 년도는 %d\n", YEAR);
  return 0;
}