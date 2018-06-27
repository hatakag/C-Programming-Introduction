#include <stdio.h>
int main()
{
  int i,j,k;
  for (i=1;i<=10;i++)
    {
      for (j=10-i;j>=1;j--)
	{
	  printf(" ");
	}
      for (k=1;k<=i;k++)
	{
	  printf("*");
	}
      printf("\n");
    }
  return 0;
}
