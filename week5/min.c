#include <stdio.h>
int main()
{
  int a,b,min;
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  min = a < b ? a : b;
  printf("Min is %d\n",min);
}
