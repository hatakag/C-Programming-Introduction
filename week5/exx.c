#include <stdio.h>
main()
{
  float a,b,c,d;
  printf("Enter a: ");
  scanf("%f",&a);
  printf("Enter b: ");
  scanf("%f",&b);
  c = pow((a+b),3) / (a*a - b*b) - a*b;
  d = (a-b)*(a+b) / (a*a - b*b)*(a*a + b*b);
  printf("%f and %f",c,d);
}
