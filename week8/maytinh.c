#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  double x=0,canx,ketqua,e=0,sinx,temp,temp1,ex;
  int i=0,j=1;
  char choice;
  do {
    printf("\n____MENU____\n");
    printf("NHAP LIEU (N)\n");
    printf("SIN X (S)\n");
    printf("CAN BAC HAI (C)\n");
    printf("E MU X (E)\n");
    printf("THOAT (T)\n");
    printf("Chon: ");
    scanf("%c",&choice);__fpurge(stdin);
    switch(choice) {
    case 'N':
      {
	printf("Nhap so thuc duong: ");
	scanf("%lf",&x);__fpurge(stdin);
	if (x<=0)
	  {
	    printf("Error--So nhap vao phai lon hon 0\n");
	    break;
	  }
	printf("Nhap sai so: ");
	scanf("%lf",&e);__fpurge(stdin);
	if (e<=0)
	  {
	    printf("Error--Sai so phai lon hon 0\n");
	    break;
	  }
	break;
      }
    case 'C':
      {
	if ((x==0)||(e==0))
	  {
	    printf("\nNhap lieu truoc khi tinh\n");
	    break;
	  }
	canx=(x+1)/2;
	do {
	  ketqua=canx;
	  canx=0.5*(canx+x/canx);
	}
	while (fabs(canx-ketqua)>e);
	printf("\nCan bac hai cua x = %lf\n",canx);
	break;
      }
    case 'S':
      {
	if ((x==0)||(e==0))
	  {
	    printf("\nNhap lieu truoc khi tinh\n");
	    break;
	  }
	sinx=temp=x;
	while (temp>e) {
	  i++;
	  temp=temp*x*x/(2*i+1)/(2*i);
	  if (i%2==0) sinx=sinx+temp;
	  else sinx=sinx-temp;
	}
	printf("\nSin(x) = %lf\n",sinx);
	break;
      }
    case 'E':
      {
	if ((x==0)||(e==0))
	  {
	    printf("\nNhap lieu truoc khi tinh\n");
	    break;
	  }
	ex=1+x,temp1=x;
	while (temp1>e) {
	  j++;
	  temp1=temp1*x/j;
	  ex=ex+temp1;
	}
	printf("\ne^x = %lf\n",ex);
	break;
      }
    case 'T':
      break;
    default: printf("\nError--Chon khong hop le (N,S,C,E,T)\n"); break;
    }
  } while (choice != 'T');
  printf("\n___GOOD BYE___\n");
  return 0;
}
      
