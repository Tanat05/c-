#include <stdio.h>
int main() {
  int n,i,temp;
  printf("두 수를 입력하세요 : ");
  scanf("%d %d", &n, &i);
  if (n>i){
    temp = n;
    n = i;
    i = temp;
  }
  for (n;n<=i;n++)
    printf("%d ", n);
}
