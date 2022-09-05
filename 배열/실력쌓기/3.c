#include <stdio.h>
int main(){
  int i, ca=0, cca=0;
  char text[100]= {0};
  scanf("%s", text);
  for (i=0;i<100;i++){
    if (text[i] == 'c' || text[i] == 'C')
      ca += 1;
  }
  for (i=0;i<100;i++){
    if ((text[i] == 'c' || text[i] == 'C')&& (text[i+1] == 'c' || text[i+1] == 'C')) 
      cca += 1;
  }
  printf("C의 갯수는 : %d \nCC의 갯수는 : %d", ca, cca);
}
