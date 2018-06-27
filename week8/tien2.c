#include <stdio.h>
int main()
{
  long int a=500000,b=200000,c=100000,d=50000,e=20000,f=10000,g=5000,t;
  printf("\nTien (chan 5000): "); 
  scanf("%ld",&t);
  if ((t%5000!=0)||(t<=0))
    {
      printf("\nNhap khong hop le\n\n");
      return 0;
    }
  int t1=t%a;
  int t2=t1%b;
  int t3=t2%c;
  int t4=t3%d;
  int t5=t4%e;
  int t6=t5%f;
  printf("\n%ld = %ld to 500000 + %ld to 200000 + %ld to 100000 + %ld to 50000 + %ld to 20000 + %ld to 10000 + %ld to 5000\n",t,t/a,t1/b,t2/c,t3/d,t4/e,t5/f,t6/g);
  return 0;
}
