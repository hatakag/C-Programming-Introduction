#include <stdio.h>
double celsius(double f)
{
  return 5*(f-32)/9;
}
int main()
{
  double fahr,l,h,s;
  printf("Lowest value: ");scanf("%lf",&l);
  printf("Highest value: ");scanf("%lf",&h);
  printf("Step: ");scanf("%lf",&s);
  fahr=l;
  printf("Fahrenheit\tCelsius\n");
  while ((fahr<=h)) {
    printf("%7.1lf\t\t%7.1lf\n",fahr,celsius(fahr));
    fahr +=s;
  }
  return 0;
}
