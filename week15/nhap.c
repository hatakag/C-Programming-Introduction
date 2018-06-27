#include <stdio.h>
#include <math.h>
float lamtron(float a) //9.17->9.2
{
  float i,j;
  j=(int)(a*10);
  i=a*10-j;
  if (i>=0.5) a=j/10+0.1;
  else a=j/10;
  return a;
}
int main()
{
  float a=9.15,b=2.56,c=-4.24;
  printf("%d %d\n",(int)(a*10),(int)(b*10));
  a=round(a*10)/10;
  b=round(b*10)/10;
  c=round(c*10)/10;
  printf("%f %f %f\n",a,b,c);
}
