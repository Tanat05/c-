#include <stdio.h>
int main(){
  int c[10000]; 
  int i, k, min=23;
  scanf("%d", &k);
  for (i=0;i<k;i++){
    scanf("%d", &c[i]);
  }
  for (i=0;i<k;i++){
    if (min>c[i])
      min = c[i];
  }
  printf("%d", min);
}
