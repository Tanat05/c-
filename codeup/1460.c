#include <stdio.h>
int main(){
  int x, y, n, num=1;
  int a[100][100];
  scanf("%d", &n);
  for (x=0;x<n;x++){
    for (y=0;y<n;y++){
      a[x][y] = num++;
    }
  }
  for (x=0;x<n;x++){
    for (y=0;y<n;y++){
      printf("%d ", a[x][y]);
      }
    printf("\n");
  }
}
