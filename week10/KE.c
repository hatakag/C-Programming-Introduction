#include <stdio.h>
double KE (double m,double v)
{
  return m*v*v/2;
}
int main(void)
{
  double m,v;
  do {
    printf("Enter mass: ");scanf("%lf",&m);
    printf("Enter velocity: ");scanf("%lf",&v);
  } while (m<=0||v<0);
  printf("Kinetic energy is %lf\n",KE(m,v));
}


