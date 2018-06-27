#include <stdio.h>
int main()
{
  int i,j,k,n=0,choice;
  do {
    printf("Menu\n1.Size\n2.Solid square\n3.Square\n4.Triangle\n5.Diamond\n6.Quit\n");
    printf("Select: ");__fpurge(stdin);
    scanf("%d",&choice);
    switch (choice) {
    case 1: 
      {
	printf("Input size (positive interger): ");__fpurge(stdin);
	scanf("%d",&n);
	if (n<=0)
	  {
	    printf("\nInvalid input\n\n");
	    break;
	  }
	else 
	  break;  
	break;
      }
    case 2:
      {
	if (n==0)
	  {
	    printf("\nInput size first\n\n");
	    break;
	  }
	else
	  {
	    for (i=1;i<=n;i++)
	      {
		for (j=1;j<=n;j++)
		  printf("*");
		printf("\n");
	      }
	    break;
	  }
      }
    case 3:
      {
	if (n==0)
	  {
	    printf("\nInput size first\n\n");
	    break;
	  }
	else
	  {
	    for (i=1;i<=n;i++)
	      {
		for (j=1;j<=n;j++)
		  {
		    if (j==1 || j==n || i==1 || i==n)
		      printf("*");
		    else 
		      printf(" ");
		  }
		printf("\n");
	      }
	    break;
	  }
      }
    case 4:
      {
	if (n==0)
	  {
	    printf("\nInput size first\n\n");
	    break;
	  }
	else
	  {
	    for (i=1;i<=n;i++)
	      {
		for (j=n-i;j>=1;j--)
		  {
		    printf(" ");
		  }
		for (k=1;k<=2*i-1;k++)
		  {
		    printf("*");
		  }
		printf("\n");
	      }
	    break;
	  }
      }
    case 5:
      {
	if (n==0)
	  {
	    printf("\nInput size first\n\n");
	    break;
	  }
	else
	  {
	    for (i=1;i<=n;i++)
	      {
		for (j=n-i;j>=1;j--)
		  {
		    printf(" ");
		  }
		for (k=1;k<=2*i-1;k++)
		  {
		    printf("*");
		  }
		printf("\n");
	      }
	    for (i=n-1;i>=1;i--)
	      {
		for (j=1;j<=n-i;j++)
		  {
		    printf(" ");
		  }
		for (k=2*i-1;k>=1;k--)
		  {
		    printf("*");
		  }
		printf("\n");
	      }
	    break;
	  }
      }
    case 6:
      break;
    default: printf("\nInput is not valid\n"); break;
    }
  }
  while (choice != 6);
  printf("\n\n***GOOD BYE***\n");
  return 0;
}
