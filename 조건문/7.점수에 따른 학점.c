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






#include <stdio.h>

int main(){
  int score;
  
  printf("학점을 입력하세요 (1~100)\n");
  scanf("%d", &score);
  
  if (score > 100 || score < 1){
    printf("범위 내의 수를 입력해주세요");
  }
  else {  
    switch (score/10){
      case 10 : printf("학점은 A입니다."); break; 
      case 9 : printf("학점은 A입니다."); break;
      case 8 : printf("학점은 B입니다."); break;
      case 7 : printf("학점은 C입니다."); break;
      case 6 : printf("학점은 D입니다."); break; 
      default: printf("학점은 F입니다."); break;
      }
  }
  
  return 0;
}
