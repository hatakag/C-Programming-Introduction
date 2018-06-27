#include <stdio.h>
#define max 10
int main()
{
  int a[max];
  int i,sum=0;
  for (i=0;i<max;i++) {
    printf("a[%d]=",i);scanf("%d",&a[i]);
  }
  for (i=1;i<(max-1);i++) {
    if (a[i]>=a[i-1] && a[i]>=a[i+1])
      sum += a[i];
  }
  printf("%d\n",sum);
  return 0;
}
