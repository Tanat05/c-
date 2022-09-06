#include <stdio.h>
int main(){
  int n=0;
  long long int dna;
  printf("용의자의 DNA 정보를 입력하세요 : ");
  scanf("%lld", &dna);
  while (dna>0){
    n += dna%10;
    dna /= 10;
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
  int i, n=0;
  char c, dna[11];
  printf("용의자의 DNA 정보를 입력하세요. : ");
  scanf("%s", dna);
  for (i=0;i<10;i++){
    c = dna[i];
    n += atoi(&c);
  }
  
  if (n%7 == 4){
    printf("범인\n");
  }
  else{
    printf("일반인\n");
  }  
}
