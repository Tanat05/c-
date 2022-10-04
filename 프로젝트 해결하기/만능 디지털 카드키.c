#include <stdio.h>

int n1, n2, n3, id=0, i;

int small(int a, int b){
  if (a>b)
    return a;
  else
    return b;
}

void input(){
  scanf("%d %d %d", &n1, &n2, &n3);
}

int process(int a, int b, int c){
  int i;
  for (i=1;i<small(a,small(b,c));i++){
    if (a%i==0 && b%i==0 && c%i==0)
      id = i;
  }
  return id;
}

int output(){
  printf("%d", id);
}

int main(){
  input();
  process(n1, n2, n3);
  output();
  return 0;
}


#include <stdio.h>

int n1, n2, n3, id=0, i=0;

int small(int a, int b){
  if (a>b)
    return a;
  else
    return b;
}

void input(){
  scanf("%d %d %d", &n1, &n2, &n3);
}

void process(int a, int b, int c){
  for (i=small(a,small(b,c));i>=1;i--){
    if (a%i==0 && b%i==0 && c%i==0){
      return;
    }
  }
}

int output(){
  printf("%d", i);
}

int main(){
  input();
  process(n1, n2, n3);
  output();
  return 0;
}
