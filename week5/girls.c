#include <stdio.h>
int main()
{
  int h=175,a1,a2,h1,h2,pa1,pa2,ph1,ph2,p1,p2;
  printf("What is the girl1's age and height (aa hhh): ");
  scanf("%d%d",&a1,&h1);
  printf("What is the girl2's age and height: ");
  scanf("%d%d",&a2,&h2);
  (a1<=16) ? (pa1=0) : ((16<a1&&a1<21) ? (pa1=5) : (pa1=2));
  (a2<=16) ? (pa2=0) : ((16<a2&&a2<21) ? (pa2=5) : (pa2=2));
  (h1>=h) ? (ph1=-1) : (h>h1&&h1>=(h-30)) ? (ph1=3) : (ph1=-2);
  (h2>=h) ? (ph2=-1) : (h>h2&&h2>=(h-30)) ? (ph2=3) : (ph2=-2);
  printf("The girl1's point is %d+%d=%d\n",pa1,ph1,p1=pa1+ph1);
  printf("The girl2's point is %d+%d=%d\n",pa2,ph2,p2=pa2+ph2);
  (p1>p2) ? printf("Girl1 is choosen\n") : ((p1<p2) ? printf("Girl2 is choosen\n") : printf("Make dating with them in Saturday and Sunday\n"));
}
