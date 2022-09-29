#include <stdio.h>

int me,com,result;

void input(){
  scanf("%d %d", &me, &com);
}

void process(){
  if (me==com){
    result = 2;
  }
  else if (me+1==com || (me==2 && com==0)){
    result = 1;
  }
  else {
    result = 0;
  }
}

void output(){
  switch (result){
    case 0: printf("패배");break;
    case 1: printf("승리");break;
    default: printf("무승부");
  }
}

int main(){
  input();
  process();
  output();
  return 0;
}
