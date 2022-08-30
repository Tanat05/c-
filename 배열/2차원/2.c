#include <stdio.h>
int main(){
  int A[4][2], s, i, j;
  for (i=0;i<4;i++){
    printf("%d번 학생의 수학, 프로그래밍 점수를 입력하시오. : ", i+1);
    for (j=0;j<2;j++){
      scanf("%d",& A[i][j]);
    }
  }
  for (i=0;i<4;i++){
    for (j=0;j<2;j++){
      s += A[i][j];
    }
    printf("%d번 학생 점수 : %d\n", i+1, s);
    s = 0;
  }
  return  0;
}
