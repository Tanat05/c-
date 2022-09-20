#include <stdio.h>
int f(int a, int b, int c, int d){
  return a+b+c+d;
} 
int main(){
  int a, b, c, d, sum;
  printf("4개의 윷 상태를 입력하세요.\n(0:뒤집어지지 않은 상태, 1:뒤집어진 상태) : ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  sum = f(a, b, c, d);
  if(sum==0)
    printf("모");
  else if (sum==1)
    printf("도");
  else if (sum==2)
    printf("개");
  else if (sum==3)
    printf("걸");
  else
    printf("윷");
}  
