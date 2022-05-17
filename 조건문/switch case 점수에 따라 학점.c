#include <stdio.h>

int main(){
  int score;
  
  printf("학점을 입력하세요 (1~100)\n");
  scanf("%d", &score);
  switch (score/10){
    case 10 : printf("A"); break; 
    case 9 : printf("A"); break;
    case 8 : printf("B"); break;
    case 7 : printf("C"); break;
    case 6 : printf("D"); break; 
    default: printf("F"); break;
  }
}
