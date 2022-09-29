#include <stdio.h>

int n,k,cnt,error;

void input(){
  scanf("%d %d", &n, &k);
}

void process(){
  cnt = n / k;
}

void output(){
  int i,aa;
  if (cnt>9999){
    printf("error");
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


