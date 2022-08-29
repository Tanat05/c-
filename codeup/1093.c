#include <stdio.h>
int main(){
  int n, i, t;
  int a[23]={};
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    scanf("%d", &t);
    a[t-1]+=1;
  }
  for(i=0; i<23; i++)
  {
    printf("%d ", a[i]);
  }
}
