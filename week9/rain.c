#include <stdio.h>
#define MONTH 12
int main()
{
  int rainfall[MONTH];
  int i,j,max,min;
  float av,sum;
  for (i=0;i<MONTH;i++)
    {
      printf("Enter the rainfall(mm): ");scanf("%d",&rainfall[i]);
    }
  for (i=0;i<MONTH;i++) {
    printf("%5d",rainfall[i]);
  }
  max=min=rainfall[0];
  for (i=0;i<MONTH;i++) {
    if (max<rainfall[i])
      max=rainfall[i];
    if (min>rainfall[i])
      min=rainfall[i];
  }
  printf("\n");printf("The maximum rainfall is %d\n",max);
  printf("The minimum rainfall is %d\n",min);
  sum=0;
  for (i=0;i<MONTH;i++) {
    sum+=rainfall[i];
  }
  printf("The averge rainfalll is %.2f\n",av=sum/12);
  printf("The months continously have the high number of rainfall: ");
  for (i=0;i<MONTH;i++) {
    if (rainfall[i]>av&&(rainfall[i+1]>av||rainfall[i-1]>av)) {
      printf("%d\t",i+1);
    }
  }
  printf("\n");
  return 0;
}
