#include <stdio.h>

int main(){
  int score,goal;
  printf("점수를 입력하세요 :");
  scanf("%d", &score);
  printf("합격점을 입력하세요 :");
  scanf("%d", &goal);
  if (goal <= score){
    printf("합격");
  }
  else{
    printf("불합격");
  }
}
