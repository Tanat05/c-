#include <stdio.h>

int main() {
  int i, answer;
  scanf("%d", &answer);

  for (i=2;i<answer;i++){
    if (answer%i==0)
      break;
  }
  if (answer == i) printf("소수입니다.");
  else printf("소수가 아닙니다.");
  return 0;
}  
