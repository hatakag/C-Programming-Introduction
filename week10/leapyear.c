#include <stdio.h>
int is_leapyear(int year);
int main()
{
  int year;
  do {
    printf("Enter year: ");
    scanf("%d",&year);
  } while (year<0);
  if (is_leapyear(year))
    {
      printf("It is a leap year\n");
    }
  else printf("It is not a leap year\n");
  return 0;
}
int is_leapyear(int year)
{
  if ((year%4==0&&year%100!=0)||(year%400==0))
    return 1;
  return 0;
}
