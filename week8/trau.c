#include <stdio.h>
int main()
{
  int td,tn,kq,tg;
  for (td=1;td<=20;td++) {
    for (tn=1;tn<=(33-td);tn++) {
      kq=5*td+3*tn+(100-td-tn)/3;
      if ((kq==100)&&((100-td-tn)%3==0))
	{
	  printf("%d %d %d\n",td,tn,100-td-tn); 
	  break;
	}
    }
  }
  return 0;
}
  
