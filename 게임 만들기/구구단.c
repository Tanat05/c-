#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int ran1, ran2, n;
  srand(time(NULL));
  while (1){
  	ran1 = rand()%9+1;
    ran2 = rand()%9+1;
  	printf("%d * %d = ", ran1, ran2);
    scanf("%d", &n);
    if (n != ran1*ran2) {
      printf("땡 정답은 %d입니다", ran1*ran2);
      break;
    }
  }
}
