#include <stdio.h>
int f(int *a, int *b){
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
int main(){
  int A[5]={66, 84, 79, 93, 48};
  int i,j;
  for (i=0;i<4;i++)
    for (j=i+1;j<5;j++)
      if (A[i]>A[j])
        f(&A[i], &A[j]);
  for (i=0;i<5;i++)
    printf("%d ", A[i]);
}
