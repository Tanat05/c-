#include <stdio.h>
int main(){
  int score[5] = {72, 98, 85, 66, 78};
  int i, sum = 0;
  for (i=0;i<5;i++){
    sum += score[i];
  }
  printf("%d", sum);
  return 0;
}
