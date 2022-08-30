#include <stdio.h>
int main(){
  int floor, ho;
  int apt[3][4] = {{111000,125000,136000,98000},{136000,142000,112000,135000},{127000,133000,155000,143000}};
  int sumfloor[3]= {0,0,0};
  for (floor=0;floor<3;floor++){
    for (ho=0;ho<4;ho++){
      sumfloor[floor] += apt[floor][ho];
    }
  }
  for (floor=0;floor<3;floor++){
    printf("%d\n", sumfloor[floor]);
  }
  return  0;
}
