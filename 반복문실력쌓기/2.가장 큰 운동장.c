#include <stdio.h>
int main() {
  int a1,a2,max=0,n;
  printf("운동장 3개의 가로, 세로의 길이를 차례대로 입력하시요.\n");
  for (n=1;n<=3;n++)
    scanf("%d %d", &a1, &a2);
    if (a1*a2>max)
      max = a1*a2;

    printf("가장 큰 운동장의 넓이는 %d입니다", max);
}
