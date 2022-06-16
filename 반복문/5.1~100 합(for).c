#include <stdio.h>

int main() {
  int sum=0,i;
  for (i=1;i<=100;i++){
    printf("%d", i);
    sum += i;
  }
  printf("\n1~100의 합은 %d입니다.", sum);
}
