#include <stdio.h>

int main() {
  int a,b;
  printf("시간과 분을 입력하세요: ");
  scanf("%d %d", &a, &b);

  if (b>30){
    printf("입력한 시간의 30분 전 시간은 %d시간 %d분", a, b-30);
  }
  else {
    b += 30;
    if (a==0){
      printf("입력한 시간의 30분 전 시간은 %d시간 %d분", 23, b);
    }
    else {
      printf("입력한 시간의 30분 전 시간은 %d시간 %d분", a-1, b);
    }
  }
}
