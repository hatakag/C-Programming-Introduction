#include <stdio.h>
#define max 100
int main()
{
  int a[max];
  int i,s,min;
  for (i=0;i<max;i++) {
    printf("a[%d]=",i);scanf("%d",&a[i]);
  }
  s=0,min=a[0];
  for (i=0;i<max;i++) {
    if (a[i]<min) min=a[i];
    if (a[i]%2==0) s=s+a[i];
  }
  printf("\nMinimum value in the array: %d\n",min);
  printf("Sum of the odd number: %d\n",s);
  return 0;
}
    
    
