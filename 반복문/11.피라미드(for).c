#include <stdio.h>

int main() {
  int i,n;
  for (i=1;i<=10;i++){
    for (n=1;n<=11-i;n++)
        printf(" ");
    for (n=2;n<=2*i;n++)
      printf("@");
    printf("\n");
  }
}
