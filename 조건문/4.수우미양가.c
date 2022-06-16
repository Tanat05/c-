#include <stdio.h>

int main(){
  int score;
  
  printf("과목의 점수를 입력하세요 : \n");
  scanf("%d", &score);
  if (score >= 90){
     printf("수");
  }
  else if (score >= 80){
     printf("우");
  }
  else if (score >= 70){
     printf("미");
  }
  else if (score >= 60){
     printf("양");
  }
  else {
     printf("기");
  }

  return 0;  
}
