/*
* Date: 2006-06-24
* meta: tag-easy, tag-math
*/
#include<stdio.h>

int main() {
  long long a,b,c;
  int i,N;

  while(scanf("%d",&N) && N!=-1) {
    a=0; b=1;

    for (i=1;i<=N;i++) {
      c=a+b+1;
      a=b;
      b=c;
    }
    printf("%lld %lld\n",a,b);
  }
  return 0;
}
