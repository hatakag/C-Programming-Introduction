#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double nhapso();
void nhapsotruoc(double x, double e);
double can(double x, double e);
double sine(double x, double e);
double em(double x, double e); 
int main()
{
  double x=0,e=0;
  int choice;
  do {
    printf("\n____MENU____\n");
    printf("1.NHAP LIEU \n");
    printf("2.CAN BAC HAI \n");
    printf("3.SIN X \n");
    printf("4.E MU X \n");
    printf("5.THOAT \n");
    printf("Chon: ");
    scanf("%d",&choice);__fpurge(stdin);
    switch(choice) {
    case 1:
      {
	printf("Nhap so thuc duong: ");
	x=nhapso(); if (x<=0) break;
	printf("Nhap sai so: ");
	e=nhapso(); if (e<=0) break;
	break;
      }
    case 2:
      {
	nhapsotruoc(x,e); if ((x==0)||(e==0)) break;
	printf("\nCan bac hai cua x = %lf\n",can(x,e));
	break;
      }
    case 3:
      {
	nhapsotruoc(x,e); if ((x==0)||(e==0)) break;
	printf("\nSin(x) = %lf\n",sine(x,e));
	break;
      }
    case 4:
      {
	nhapsotruoc(x,e); if ((x==0)||(e==0)) break;
	printf("\ne^x = %lf\n",em(x,e));
	break;
      }
    case 5:
      break;
    default: printf("\nError--Chon khong hop le (1,2,3,4,5)\n"); break;
    }
  } while (choice != 5);
  printf("\n___GOOD BYE___\n");
  return 0;
}
double nhapso()
{
  double x;
  scanf("%lf",&x);__fpurge(stdin);
  if (x<=0)
    {
      printf("Error--So nhap vao phai lon hon 0\n");
    }
  return x;
}
void nhapsotruoc(double x, double e)
{
  if ((x==0)||(e==0))
    {
      printf("\nNhap lieu truoc khi tinh\n");
    }
}
double can(double x, double e)
{
  double ketqua,canx;
  canx=(x+1)/2;
  do {
    ketqua=canx;
    canx=0.5*(canx+x/canx);
  }
  while (fabs(canx-ketqua)>e);
  return canx;
}
double sine(double x, double e)
{
  int i=0;
  double temp,sinx;
  sinx=temp=x;
  while (temp>e) {
    i++;
    temp=temp*x*x/(2*i+1)/(2*i);
    if (i%2==0) sinx=sinx+temp;
    else sinx=sinx-temp;
  }
  return sinx;
}
double em(double x, double e)
{
  int i=0;
  double temp,emx;
  emx=1+x,temp=x;
  while (temp>e) {
    i++;
    temp=temp*x/i;
    emx=emx+temp;
  }
  return emx;
} 
