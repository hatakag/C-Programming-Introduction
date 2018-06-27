#include <stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,max,soto,count=0;
  long int tien,sum;
  printf("Tien (chan 5000): "); 
  scanf("%ld",&tien);
  if ((tien%5000!=0)||(tien<=0))
    {
      printf("\nNhap khong hop le\n");
      return 0;
    }
  for (a=0;a<=tien/500000;a++) {     
    for (b=0;b<=(tien-500000*a)/200000;b++) {
      for (c=0;c<=(tien-500000*a-200000*b)/100000;c++) {
	for (d=0;d<=(tien-500000*a-200000*b-100000*c)/50000;d++) {
	  for (e=0;e<=(tien-500000*a-200000*b-100000*c-50000*d)/20000;e++) {
	    for (f=0;f<=(tien-500000*a-200000*b-100000*c-50000*d-20000*e)/10000;f++) {
	      for (g=0;g<=(tien-500000*a-200000*b-100000*c-50000*d-20000*e-10000*f)/5000;g++) {
		for (h=0;h<=(tien-500000*a-200000*b-100000*c-50000*d-20000*e-10000*f-5000*g)/2000;h++) {
		  sum=500000*a+200000*b+100000*c+50000*d+20000*e+10000*f+5000*g;
		  soto=a+b+c+d+e+f+g;
 		  if (sum==tien)
		    {
		      count++;
		      printf("%d %d %d %d %d %d %d \n",a,b,c,d,e,f,g);
		    }
		  break;
		}
	      }
	    }
	  }
	}
      }
    }
  }
  return 0;
}
