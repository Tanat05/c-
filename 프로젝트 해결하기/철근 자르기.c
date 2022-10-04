#include <stdio.h>

int n,k,cnt,error=0;

void input(){
  scanf("%d %d", &n, &k);
}

void process(){
  cnt = n / k;
  if (cnt>9999){
    error = 1;
  }
}

void output(){
  int i;
  if (error==1){
    printf("번호 초과 오류");
  }
  else{
    for(i=0;i<cnt;i++){
      printf("F - %04d\n", i+1);
    }
  }
}

int main(){
  input();
  process();
  output();
  return 0;
}


