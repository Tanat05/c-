#include <stdio.h>

int main() {
  int a,b;
  printf("년 월을 입력하세요:");
  scanf("%d %d", &a, &b);

  switch (b){
    case 1: 
    case 3:
    case 5:
    case 7:
    case 10:
    case 12: printf("%d년 %d월은 31일까지 있음", a, b); break;
    case 2: if (a%400 == 0 || (a%4==0 && a%100!=0)){
              printf("%d년 %d월은 윤년이므로 29일까지 있음", a, b);
            }
            else {
              printf("%d년 %d월은 28일까지 있음", a, b);
            }      
            break;
    case 4: 
    case 6: 
    case 9: 
    case 11: printf("%d년 %d월은 30일까지 있음", a, b); break;
  }
}
