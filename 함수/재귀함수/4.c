#include <stdio.h>
char star[20];
int f(int n){
  if (n>0){
    f(n-1);
    star[n] = '*';
    printf("%s\n", star+1);
  }
}
int main(){
  int n;
  scanf("%d", &n);
  f(n);
}
