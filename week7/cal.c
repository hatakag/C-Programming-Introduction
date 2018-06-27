#include <stdio.h>
int main()
{
  float a,b,c;
  char op;
  printf("Input a and b: ");
  scanf("%f%f",&a,&b);__fpurge(stdin);
  printf("In put operator: ");
  scanf("%c",&op);__fpurge(stdin);
  switch (op) {
  case '+' : c=a+b; break;
  case '-' : c=a-b; break;
  case '*' : c=a*b; break;
  case '/' : c=a/b; break;
  default : printf("Error\n"); break;
  }
  printf("%.3f%c%.3f=%.3f\n",a,op,b,c);
  return 0;
}
