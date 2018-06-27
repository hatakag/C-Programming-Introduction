#include <stdio.h>
int main()
{
  int a,b=0,c=0;
  printf("Enter the number you want to reverse: ");
  scanf("%d",&a);
  b=a;
  do {
    c=c*10+b%10;
    b=b/10;
  }
  while (b>0);
  printf("The reversed number of %d is %d\n",a,c);
  return 0;
}
    
