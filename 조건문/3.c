#include <stdio.h>

int main(){
  int a,b,c;
  
  printf("세 점수를 공백으로 분리해서 입력하세요 :");
  scanf("%d %d %d", &a, &b, &c);
  
  if (b <= a && c <= a){
    printf("%d", a);
  }
  else if (a <= b && c <= b){
    printf("%d", b);
  }
  else{
    printf("%d", c);
  }

  return 0;
}
