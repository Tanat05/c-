#include <stdio.h>
int pivo(int n){
  if (n==1 || n==2){
    return 1;
  }
  else{
    return pivo(n-1) + pivo(n-2);
  }
}
int main(){
  int n;
  scanf("%d", &n);
  printf("%d",pivo(n));
}
