#include <stdio.h>
int f(int n){
  int reverse=0;

  while(n>0){
    reverse *= 10;
    reverse += n%10;
    n /= 10;
  }
  return reverse;
} 
int main(){
  int n;
  scanf("%d", &n);
  if (n+f(n)==f(n+f(n)))
    printf("YES");
  else
    printf("NO");
}  
