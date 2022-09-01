#include <stdio.h>
int main(){
  int floor, ho;
  int apt[3][4] = {{111000,125000,136000,98000},{136000,142000,112000,135000},{127000,133000,155000,143000}};
  int sumfloor[3]= {0,0,0};
  for (floor=0;floor<3;floor++){
    for (ho=0;ho<4;ho++){
      sumfloor[floor] = sumfloor[floor] + apt[floor][ho];
    }
    printf("%d틍의 관리비 평균은 %1.f원 입니다.\n", floor+1, sumfloor[floor]/4.0);
  }
  printf("아파트 전체층의 관리비 평균은 %0.1f원 입니다.\n",(sumfloor[0]+sumfloor[1]+sumfloor[2])/12.0);
  return  0;
}
