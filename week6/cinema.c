#include <stdio.h>
int main()
{
  int per,a1,a2,a3,c1,c2,c3;
  char c;
  double pay,price;
  printf("Weekend(E) or weekday(D): ");
  scanf("%c",&c);
  if (c=='E')
    price = 10;
  else
    price = 7;
  printf("Number of persons (<=3): ");
  scanf("%d",&per);
  if (per==3)
    {
      printf("Age of No 1: ");
      scanf("%d",&a1);
      printf("Age of No 2: ");
      scanf("%d",&a2);
      printf("Age of No 3: ");
      scanf("%d",&a3);
      if (a1<=0||a2<=0||a3<=0)
	printf("That is not a valid age\n");
      else 
	{
	  if (a1<18)
	    c1 = 50;
	  else if (a1>=65)
	    c1 = 70;
	  else 
	    c1 = 100;
	  if (a2<18)
	    c2 = 50;
	  else if (a2>=65)
	    c2 = 70;
	  else 
	    c2 = 100;
	  if (a3<18)
	    c3 = 50;
	  else if (a3>=65)
	    c3 = 70;
	  else 
	    c3 = 100;
	  printf("GALAXY CINEMA BILLING\n");
	  printf("Number of persons: 3\n");
	  printf("Age of No 1: %d\n",a1);
	  printf("Age of No 2: %d\n",a2);
	  printf("Age of No 3: %d\n",a3);
	  printf("Title of movie: Gone with the wind.\n");
	  printf("WEEK(E)ND OR WEEK(D)AY?: %c\n",c);
	  printf("Payment: %.0f*%d%%+%.0f*%d%%+%.0f*%d%% = $%.2f\n",price,c1,price,c2,price,c3,pay=price*(c1+c2+c3)/100);
	}
    }
  else if (per==2)
    {
      printf("Age of No 1: ");
      scanf("%d",&a1);
      printf("Age of No 2: ");
      scanf("%d",&a2);
      if (a1<=0||a2<=0)
	printf("That age is not a valid age\n");
      else
	{
	  if (a1<18)
	    c1 = 50;
	  else if (a1>=65)
	    c1 = 70;
	  else 
	    c1 = 100;
	  if (a2<18)
	    c2 = 50;
	  else if (a2>=65)
	    c2 = 70;
	  else 
	    c2 = 100;
	  printf("GALAXY CINEMA BILLING\n");
	  printf("Number of persons: 2\n");
	  printf("Age of No 1: %d\n",a1);
	  printf("Age of No 2: %d\n",a2);
	  printf("Title of movie: Gone with the wind.\n");
	  printf("WEEK(E)ND OR WEEK(D)AY?: %c\n",c);
	  printf("Payment: %.0f*%d%%+%.0f*%d%% = $%.2f\n",price,c1,price,c2,pay=price*(c1+c2)/100);
	}
    }
  else if (per==1)
    {
      printf("Age of No 1: ");
      scanf("%d",&a1);
      if (a1<=0)
	printf("That is not a valid age\n");
      else
	{
	  if (a1<18)
	    c1 = 50;
	  else if (a1>=65)
	    c1 = 70;
	  else 
	    c1 = 100;
	  printf("GALAXY CINEMA BILLING\n");
	  printf("Number of persons: 1\n");
	  printf("Age of No 1: %d\n",a1);
	  printf("Title of movie: Gone with the wind.\n");
	  printf("WEEK(E)ND OR WEEK(D)AY?: %c\n",c);
	  printf("Payment: %.0f*%d%% = $%.2f\n",price,c1,pay=price*c1/100);
	}
    }
  else 
    {
      printf("The number of persons must be less than or equal to 3\n");
    }
  return 0;
}
