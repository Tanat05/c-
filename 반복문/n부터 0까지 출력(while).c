#include <stdio.h>

int main() {
  int i;
  printf("숫자를 입력하세요: ");
  scanf("%d", &i);
  while (i>=0){
    printf("%d\n", i);
    i--;
  }
}
