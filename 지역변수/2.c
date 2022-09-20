#include <stdio.h>
int num1;
int num2;
void add(){
  num1 = 10;
  num2 = num1 * 2;
}
int main(){
  int num2 = 5;
  add();
  printf("%d", num2);
  return  0;
}
