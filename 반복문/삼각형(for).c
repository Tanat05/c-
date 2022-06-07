#include <stdio.h>

int main() {
  int i=1,n=1;
  for (i;i<=5;i++){
    for (n;n<=i;n++)
      printf("*");
    printf("\n");
    n = 1;
  }
}
