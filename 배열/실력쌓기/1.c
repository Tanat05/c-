#include <stdio.h>
int main(){
  int i,n=0;
  char text[20]={0};
  printf("암호를 입력하시오 : ");
  scanf("%s", text);
  printf("결과 1 : ");
  while (1){
    if (text[n] == 0)
      break;
    printf("%c", text[n]+2);
    n+=1;
  }
  n=0;
  printf("\n결과 2 : ");
  while (1){
    if (text[n] == 0)
      break;
    printf("%c", (text[n]*7)%80+48);
    n+=1;
  }
  return  0;
}
