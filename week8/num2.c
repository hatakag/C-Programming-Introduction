#include <stdio.h>
#include <math.h>
int main()
{
  int n=0,i,j,sum,choice,a,b,c;
  do {
    printf("\n____MENU____\n");
    printf("1.Input N\n");
    printf("2.Perfect number (<N)\n");
    printf("3.Prime number (<N)\n");
    printf("4.Divisor of N\n");
    printf("5.Quit\n");
    printf("\nSelect: ");
    scanf("%d",&choice);
    switch(choice) {
    case 1:
      {
	printf("Enter an positive interger : ");
	scanf("%d",&n);
	if (n<=0)
	  {
	    printf("Invalid input\n");
	    break;
	  }
	break;
      }
    case 2:
      {
	if (n==0)
	  {
	    printf("\nInput N first\n");
	    break;
	  }
	if (n<6)
	  {
	    printf("There isn't perfect number < N \n");
	    break;
	  }
	printf("Perfect number (<N):\n");
	for (i=2;i<=n;i++)
	  {
	    sum=1;
	    for (j=2;j<=i/2;j++)
	      if (i%j==0)
		sum += j;
	    if (sum==i)
	      printf("%d\n",i);
	  }
	break;
      }
    case 3:
      {
	if (n==0)
	  {
	    printf("\nInput N first\n");
	    break;
	  }
	if (n<2)
	  {
	    printf("There isn't prime number < N\n");
	    break;
	  }
	printf("Prime number (<N):\n");
	printf("%d\n",2);
	for (a=3;a<=n;a++)
	  {
	    for (b=2;b<a;b++)
	      {
		if (a%b==0)
		  break;
		if (b>sqrt(a))
		  {
		    printf("%d\n",a);
		    break;
		  }
	      }
	  }
	break;
      }
    case 4:
      {
	if (n==0)
	  {
	    printf("\nInput N first\n");
	    break;
	  }
	printf("Divisors of N:\n");
	for (c=1;c<=n;c++)
	  if (n%c==0)
	    {
	      printf("%d\n",c);
	    }
	break;
      }
    case 5:
      break;
    default: printf("\nInvalid selection\n"); break;
    }
  } while (choice != 5);
  printf("\n___GOOD BYE___\n");
  return 0;
}

      
