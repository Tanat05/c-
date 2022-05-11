#include <stdio.h>

int main(){
  int book = 15000,money;
  printf("책의 가격은 %d원입니다.\n", book);
  printf("당신이 가진 용돈은 얼마인가요? : ");
  scanf("%d", &money);
  if (book < money){
    printf("착을 구입하였습니다. 이제 남은 용돈은 %d입니다.", money-book);
  }

  return 0;
}
