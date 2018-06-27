#include <stdio.h>
#include <math.h>
int is_prime (int n)
{
  int i=0;
  for (i=2;i<=sqrt(n);++i)
    {
      if (n%i==0)
	{
	  return 0;
	}
    }
  return 1;
}
int main(void)
{
  int num=0,j=0;
  do {
    printf("Enter a positive interger: ");
    scanf("%d",&num);
  } while (num<=0);
  printf("Prime numbers up to %d: \n",num);
  for (j=2;j<=num;++j)
    {
      if (is_prime(j)) 
	{
	  printf("%d\n",j);
	}
    }
  return 0;
}
