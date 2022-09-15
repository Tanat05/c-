#include <stdio.h>
int main(){
  int x, y, n, num=1;
  int a[100][100];
  scanf("%d", &n);
  for (y=0;y<n;y++){
    if (y%2==1){
      for (x=0;x<n;x++){
        a[y][n-1-x] = num++;
      }
    }
    else {
      for (x=0;x<n;x++){
        a[y][x] = num++;
      }
    }
  }
  for (x=0;x<n;x++){
    for (y=0;y<n;y++){
      printf("%d ", a[x][y]);
      }
    printf("\n");
  }
}
