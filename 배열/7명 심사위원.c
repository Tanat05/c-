//7명 심사위원의 제일 큰 수와 작은 수를 뺀 평균값

#include <stdio.h>
int main(){
  int score[7];
  int i, max = 0, min = 100, sum = 0;
  for (i=0;i<7;i++){
    printf("%d번 심사 위원 점수 :", i+1);
    scanf("%d", &score[i]);
  }
  for (i=0;i<7;i++){
    if (max < score[i])
      max = score[i];
    if (min > score[i])
      min = score[i];
  }
  for (i=0;i<7;i++){
    sum += score[i];
  }
  printf("점수는 %f 입니다", (double)(sum-(max+min))/5);
  return 0;
}
