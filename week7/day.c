#include <stdio.h>
int main()
{
  int month;
  printf("The month is (number): ");
  scanf("%d",&month);
  switch (month) {
  case 1 : 
  case 3 : 
  case 5 : 
  case 7 : 
  case 8 : 
  case 10 : 
  case 12 :
    printf("This month has 31 days\n");
    break;
  case 4 : 
  case 6 : 
  case 9 : 
  case 11 :
    printf("This month has 30 days\n");
    break;
  case 2 :
    printf("This month has 28 or 29 days\n");
    break;
  default : printf("Error--The month must be an interger from 1 to 12\n");
    break;
  }
  return 0;
}
