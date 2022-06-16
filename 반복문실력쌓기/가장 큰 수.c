#include <stdio.h>
int main() {
  int i,n,max1=0,max2=0;
  for (i=1;i<=10;i++) {
    scanf("%d", &n);
    if (n%2==1){
      if (n>max1)
        max1 = n;
    }
    else{
      if (n>max2)
        max2 = n;
    }
  }
  if (max1!=0 && max2!=0)
    printf("%d %d", max1, max2);
  else if (max1!=0)
    printf("%d", max1);
  else if (max2!=0)
    printf("%d", max2);
}
