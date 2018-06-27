#include <stdio.h>
int main()
{
  int x;
  float f;
  printf("A number in interger: ");
  scanf("%d", &x);
  printf("A double: ");
  scanf("%f", &f);
  printf("The interger is %d ",x);
  printf(", the octal is %o ",x);
  printf(", the hexa is %x ",x);
  printf("and the double is %.3f\n",f);
  return 0;
}
