#include <stdio.h>
int main()
{
  int d,m,y,x;
  char ch1,ch2;
  float f;
  printf("x is : ");
  scanf("%d", &x);
  printf("Date : ");
  scanf("%2d%2d%4d", &d,&m,&y);
  printf("Date is ");
  scanf("%d/%d/%d", &d,&m,&y);
  printf("Character : ");
  scanf("%c%c", &ch1,&ch2);
  printf("Floating-point numbers : ");
  scanf("%f", &f);
  return 0;
}
