#include <stdio.h>
int main()
{
  char day[10];
  float ov=7,th=15,we=21;
  int a,b,c;
  printf("The day of the week: ");
  scanf("%s",day);
  printf("The number of overnight DVDs: ");
  scanf("%d",&a);
  printf("The number of three-day DVDs: ");
  scanf("%d",&b);
  printf("The number of weekly DVDs: ");
  scanf("%d",&c);
  printf("From: %s\n",day);
  printf("The cost of renting DVDs overnight is: %4dx %.2f = $%.2f\n",a,ov,a*ov);
  printf("The cost of renting DVDs three-day is: %4dx%.2f = $%.2f\n",b,th,b*th);
  printf("The cost of renting DVDs weekly is   : %4dx%.2f = $%.2f\n",c,we,c*we);
  printf("The total cost of renting DVDs is    :              $%.2f\n",a*ov+b*th+c*we);
}
