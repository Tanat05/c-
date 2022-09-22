#include <stdio.h>
int f(int *a, int *b){
  int t;
  if (*a>*b){
    t = *a;
    *a = *b;
    *b = t;
  }
}
int main(){
  int a, b, c;
  printf("3사람의 몸무게를 차례대로 입력하시오. : ");
  scanf("%d %d %d", &a, &b, &c);
  f(&a, &b);
  f(&b, &c);
  f(&a, &b);
  printf("%d %d %d", a, b, c);
}  
