//미완성
#include <stdio.h>
int main() {
  int score,max=0,min=100,n,i;
  printf("학생 수를 입력하세요 : ");
  scanf("%d", &i);
  printf("점수를 입력하세요(0~100) : ");
  for (n=1;n<=i;n++)
    scanf("%d", &score);
    if (score>max)
      max = score;
    if (score<min)
      min = score;

    printf("1등은 %d점, 꼴지는 %d점", max, min);
}
