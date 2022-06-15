#include <stdio.h>
int main() {
  int n,i;
  printf("두 수를 입력하세요 : ");
  scanf("%d %d", &n, &i);
  for (n;n<=i;n++)
    printf("%d ", n);
}
