#include <stdio.h>
#define ipod 148
#define ipad 288
int main()
{
  int a,b,disc;
  float dis,n;
  printf("Ban muon mua bao nhieu IPOD? ");
  scanf("%d",&a);
  printf("Ban muon mua bao nhieu IPAD? ");
  scanf("%d",&b);
  printf("SIEU THI TOPCARE - HOA DON THANH TOAN\n");
  printf("Ipod\t%6dx %d = %d\n",a,ipod,a*ipod);
  printf("Ipad\t%6dx %d = %d\n",b,ipad,b*ipad);
  printf("Net \t              %.0f\n",n=a*ipod+b*ipad);
  ((a>=3)&&(b==2)) || (n>1020) ? (disc = 10) : (disc = 0);
  printf("Discount %.0fx%d% = %.1f\n",n,disc,dis=n*disc/100);
  printf("You pay: %.0f - %.1f = %.1f\n",n,dis,n-dis);
}
