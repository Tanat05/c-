#include <stdio.h>
int main(){
  long long int w,a,b,c,i,sum=0;
  printf("1.등차수열의 합 2.등비수열의 합\n");
  scanf("%lld", &w);
  if (w==1){
    printf("첫째항이 a, 등차가 b, 제 1항부터 제c항까지의 합\n");

    printf("a, b, c 를 순서대로 입력하시오\n");
    scanf("%lld %lld %lld", &a, &b, &c);
    for (i=0;i<c;i++){
      sum += a;
      a += b;
    }
    printf("1항부터 %lld항까지의 합은 %lld", c, sum);
  }
  else {
    printf("첫째항이 a, 등비가 b, 제 1항부터 제c항까지의 합\n");
    printf("a, b, c 를 순서대로 입력하시오\n");
    scanf("%lld %lld %lld", &a, &b, &c);
    for (i=0;i<c;i++){
      sum += a;
      a *= b;
    }
    printf("1항부터 %lld항까지의 합은 %lld", c, sum);
  }
}
