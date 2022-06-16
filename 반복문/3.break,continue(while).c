#include <stdio.h>

int main() {
  int num;
  while (1){
    printf("숫자를 입력하세요: ");
    scanf("%d",&num);
    if (num<0) break; // 0이하 이면 종료
    if (num==0) continue; // 0이면 while 조건으로
    if (num%2==1) // 짝수,홀수 판단
      printf("홀수\n");
    else
      printf("짝수\n");
  }
}
