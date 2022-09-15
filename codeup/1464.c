#include <stdio.h>
int main(){
  int x, y, n1, n2, num=1;
  int a[100][100];
  scanf("%d %d", &n2, &n1);
  for (x=0;x<n2;x++){
    for (y=0;y<n1;y++){
      a[n2-1-x][n1-1-y] = num++;
    }
  }
  for (x=0;x<n2;x++){
    for (y=0;y<n1;y++){
      printf("%d ", a[x][y]);
      }
    printf("\n");
  }
}
