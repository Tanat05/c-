#include <stdio.h>
int f(int a, int b, int c, int d){
  return a+b+c+d;
} 
int main(){
  int a, b, c, d, sum;
  printf("4개의 윷 상태를 입력하세요.\n(0:뒤집어지지 않은 상태, 1:뒤집어진 상태) : ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  switch(f(a, b, c, d)){
    case 1: printf("도"); break;
    case 2: printf("개"); break;
    case 3: printf("걸"); break;
    case 4: printf("윷"); break;
    default: printf("모");
  }  
}
