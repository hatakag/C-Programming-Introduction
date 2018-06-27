#include <stdio.h>
int main()
{
  int a,b,c,max,av,sum,diff;
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  printf("Enter c: ");
  scanf("%d",&c);
  max = a > b ? a : b;
  max = max > c ? max : c;
  printf("Max is %d\n",max);
  av = (a + b + c) / 3;
  sum = a + b;
  b > c ? (diff = b - c) : (diff = c - b);
  av > 10 ? printf("%d\n",sum) : printf("%d\n",diff);
}
