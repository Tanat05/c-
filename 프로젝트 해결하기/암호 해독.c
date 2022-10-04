#include <stdio.h>
#include <string.h>

char text1[101], text2[101];

void input(){
  gets(text1);
}

void process(char text){
  int i;
  for (i=0;i<strlen(text1);i++)
  	if (text1[i] != 0)
  		if (text1[i] == 'a' || text1[i] == 'b' || text1[i] == 'c')
  			text2[i] = text1[i] + 23;
  		else if (text1[i] == ' ')
  			text2[i] = ' ';
    	else
			text2[i] = text1[i] - 3;
}

void output(){
  printf("%s", text2);
}

int main(){
  input();
  process(text1);
  output();
  return 0;
}
