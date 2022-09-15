#include <stdio.h>
int main(){
  int x, y, n1, n2, num=1;
  int a[100][100];
  scanf("%d %d", &n2, &n1);
  for (x=0;x<n1;x++){
    if (x%2==1)
      for (y=0;y<n2;y++){
        a[n1-1-x][n2-1-y] = num++;
      }
    else
      for (y=0;y<n2;y++){
        a[n1-1-x][y] = num++;
      }
  }
  for (x=0;x<n2;x++){
    for (y=0;y<n1;y++){
      printf("%d ", a[y][x]);
      }
    printf("\n");
  }
}
