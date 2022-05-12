#include <stdio.h>

int main(){
  int score,score2;
  printf("1과목의 점수를 입력하시요 : ");
  scanf("%d", &score);
  printf("2과목의 점수를 입력하시요 : ");
  scanf("%d", &score2);
  if (score >= 60){
    if (score2 >= 60){
      printf("합격\n");
    }
    else{
      printf("합격\n");
      }
  }
  else{
    printf("합격\n");
  }
}
