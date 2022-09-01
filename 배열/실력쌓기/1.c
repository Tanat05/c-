#include <stdio.h>
int main(){
  int i;
  char text[20]={0};
  printf("암호를 입력하시오 : ");
  scanf("%s", text);
  printf("결과 1 : ");
  for (i=0;i<20;i++){
    printf("%c", text[i]+2);
  }
  printf("\n결과 2 : ");
  for (i=0;i<20;i++){
    if (text[i] == 0)
      break;
    printf("%c", (text[i]*7)%80+48);
  }
  return  0;
}


#include <stdio.h>
int main(){
  int i;
  char text[21];
  printf("암호를 입력하시오 : ");
  scanf("%s", text);
  printf("결과 1 : ");
  for (i=0;i!='\n';i++){
    printf("%c", text[i]+2);
  }
  printf("\n결과 2 : ");
  for (i=0;i!='\n';i++){
    printf("%c", (text[i]*7)%80+48);
  }
  return  0;
}
