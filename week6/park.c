#include <stdio.h>
int main()
{
  int hours;
  char type;
  float fee;
  printf("Enter the type of vehicle (C,B,T): ");
  scanf("%c",&type);
  printf("Enter the number of hours spent in the car park: ");
  scanf("%d",&hours);
  if (type=='C')
    {
      if (hours>2)
	{
	  fee = 1.4 + (hours-2)*2.5;
	}
      else
	{
	  fee = hours*0.7;
	}
    }
  else if (type=='B')
    {
      if (hours>2)
	{
	  fee = 3 + (hours-2)*2;
	}
      else
	{
	  fee = hours*1.5;
	}
    }
  else
    {
      fee = 2.5;
      if (hours>1)
	{
	  fee += (hours-1)*3.25;
	}
    }
  printf("Please pay $%.2f\n",fee);
  return 0;
}
