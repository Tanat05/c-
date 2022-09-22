#include <stdio.h>
int f(int weight[3]){
  int t;
  for (int i=0;i<3;i++){
    for (int j=i+1;j<4;j++){
      if(weight[i]>weight[j]){
        t = weight[i];
        weight[i] = weight[j];
        weight[j]= t;
      }
    }
  }
} 
int main(){
  int weight[3];
  printf("3사람의 몸무게를 차례대로 입력하시오. : ");
  scanf("%d %d %d", &weight[0], &weight[1], &weight[2]);
  f(weight);
  printf("%d %d %d", weight[0], weight[1], weight[2]);
}  
