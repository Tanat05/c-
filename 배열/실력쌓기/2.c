#include <stdio.h>
#include <string.h>
int main(){
  int i,n=0;
  char text[100]={0};
  gets("%s", text);
  for (i=0;i<strlen(text);i++){
    printf("%c", text[99-i]);
  }
  return  0;
}




#include <stdio.h>
int main(){
  int i,n=0;
  char text[100]={0};
  scanf("%[^\n]s", text);
  for (i=0;i<100;i++){
    printf("%c", text[99-i]);
  }
  return  0;
}
