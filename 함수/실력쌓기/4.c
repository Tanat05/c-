#include <stdio.h>
int f(int n[3]){
  int a, b;
  a = n[0]*100+n[1]*10+n[2];
  b = n[2]*100+n[1]*10+n[0];
  return  a+b;
} 
int main(){
  int n[3]={0};
  scanf("%1d%1d%1d", &n[0], &n[1], &n[2]);
  printf("%d", f(n));
}  
