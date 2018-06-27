#include <stdio.h>
#define acost 15
#define bcost 12
#define ccost 9
#define vat 0.05
int main()
{
  int a,b,c;
  float d,e;
  printf("Class A seats were sold: ");
  scanf("%d", &a);
  printf("Class B seats were sold: ");
  scanf("%d", &b);
  printf("Class C seats were sold: ");
  scanf("%d", &c);
  d = acost * a + bcost * b + ccost * c;
  printf("The amount of income generated from ticket sales: %.2f$\n",d);
  e = d * (1-vat);
  printf("The final amount of money that VFF get: %.2f$\n",e);
  return 0;
}
