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
  int i,aa;
  if (error==1){
    printf("번호 초과 오류");
  }
  else{
    for(i=0;i<cnt;i++){
      printf("F - ");
      if (i+1<10){
        printf("000");
      }
      else if (i+1<100){
        printf("00");
      }
      else if (i+1<1000){
        printf("0");
      }
      printf("%d\n", i+1);
    }
  }
}

int main(){
  input();
  process();
  output();
  return 0;
}


