#include <stdio.h>
int main(){
  int x, y, n1, n2, num=1;
  int a[100][100];
  scanf("%d %d", &n1, &n2);
  for (x=0;x<n2;x++){
    for (y=0;y<n1;y++){
      a[y][n2-1-x] = num++;
    }
  }
  for (x=0;x<n1;x++){
    for (y=0;y<n2;y++){
      printf("%d ", a[x][y]);
      }
    printf("\n");
  }
}
