#include <stdio.h>
int main(){
  int i, j;
  int color, row, col;
  char alphago[19][19] = {0};
  while (1){
    scanf("%d %d %d", &color, &row, &col);
    if (color == 0){
      alphago[row][col] = 'B';
    }
    else if (color == 1){
      alphago[row][col] = 'W';
    }
    else if (color == 2){
      break;
    }
    for (i=0;i<19;i++){
      for (j=0;j<19;j++){
        printf("%c ", alphago[i][j]);
      }
      printf("\n");
    }
  }
  return  0;
}
