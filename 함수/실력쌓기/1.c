#include <stdio.h>
int f(int year){
  if(year%400==0 || (year%4==0 && year%100!=0))
    return 1;
  else
    return 0;
} 
int main(){
  int year;
  scanf("%d", &year);
  if (f(year)==1)
    printf("윤년");
  else
    printf("평년");
}
