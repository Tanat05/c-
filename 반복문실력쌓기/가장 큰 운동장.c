#include <stdio.h>
int main() {
  int a1,a2,b1,b2,c1,c2;
  printf("운동장 3개의 가로, 세로의 길이를 차례대로 입력하시요.\n");
  scanf("%d %d", &a1, &a2);
  scanf("%d %d", &b1, &b2);
  scanf("%d %d", &c1, &c2);
  if (a1*a2 >= b1*b2 && a1*a2 >= c1*c2)
    printf("가장 큰 운동장의 넓이는 %d입니다", a1*a2);
  else if (b1*b2 >= c1*c2)
    printf("가장 큰 운동장의 넓이는 %d입니다", b1*b2);
  else
    printf("가장 큰 운동장의 넓이는 %d입니다", c1*c2);
}
