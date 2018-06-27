#include <stdio.h>
#include <limits.h>
main()
{
  int j;
  long int k;
  float x;
  double z;
  printf("Enter an interger (between %i and %i): ",INT_MIN,INT_MAX);
  scanf("%i",&j);
  printf("You enter %d\n\n",j);
}
