#include <stdio.h>
int main(){
  int i, n=0 , x=0;
  int dna;
  scanf("%d", &dna);
  while (1){
    n += dna%10;
    dna = dna/10;
    if (dna%10 == 0)
      break;
  }
  
  if (n%7 == 4){
    printf("범인");
  }
  else{
    printf("일반인");
  }  
}



#include <stdio.h>
#include <stdlib.h>
int main(){
  int i, n=0 , x=0;
  char dna[10];
  scanf("%s", dna);
  for (i=0;i<10;i++){
    n += atoi(dna[i]);
  }
  
  if (n%7 == 4){
    printf("범인");
  }
  else{
    printf("일반인");
  }  
}
