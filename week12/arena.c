#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arena(int *a,int *b,int *c,int i,int j)
{
  int x,y;
  x=a[i]*b[i]-c[j];
  y=a[j]*b[j]-c[i];
  printf("\nTran dau giua dau si %d va dau si %d\n",i+1,j+1);
  if (x>y) {
    printf("Dau si %d chienthang\n",j+1);
    a[j]=a[j]+a[j]*2/100;
    b[j]=b[j]+b[j]*2/100;
    c[j]=c[j]+c[j]*2/100;
    a[i]=a[i]+a[i]*1/100;
    b[i]=b[i]+b[i]*1/100;
    c[i]=c[i]+c[i]*1/100;
  }
  else if (x<y) {
    printf("Dau si %d chienthang\n",i+1);
    a[j]=a[j]+a[j]*1/100;
    b[j]=b[j]+b[j]*1/100;
    c[j]=c[j]+c[j]*1/100;
    a[i]=a[i]+a[i]*2/100;
    b[i]=b[i]+b[i]*2/100;
    c[i]=c[i]+c[i]*2/100;
  }
  else {
    printf("Ca hai deu thang\n");
    a[j]=a[j]+a[j]*2/100;
    b[j]=b[j]+b[j]*2/100;
    c[j]=c[j]+c[j]*2/100;
    a[i]=a[i]+a[i]*2/100;
    b[i]=b[i]+b[i]*2/100;
    c[i]=c[i]+c[i]*2/100;
  }
  int z=rand() % 5 + 1;
  int t=rand() % 2 + 1;
  if (t==2) {
    printf("Thuong ngau nhien cho dau si %d them %d%% cac chi so\n",j+1,z);
    a[j]=a[j]+a[j]*z/100;
    b[j]=b[j]+b[j]*z/100;
    c[j]=c[j]+c[j]*z/100;
  }
  else {
    printf("Thuong ngau nhien cho dau si %d them %d%% cac chi so\n",i+1,z);
    a[i]=a[i]+a[i]*z/100;
    b[i]=b[i]+b[i]*z/100;
    c[i]=c[i]+c[i]*z/100;
  }
}
int main() {
  int a[3],b[3],c[3];
  int i,vong,dem=0;
  for (i=0;i<3;i++) {
    printf("Nhap cac chi so cua dau si %d (suc manh, nhanh nhen, mau): ",i+1);
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
    if ((a[i]<=0)||(b[i]<=0)||(c[i]<=0)) {
      printf("Nhap khong hop le --- Cac chi so phai lon hon 0\n");
      return 0;
    }
  }
  printf("So vong dau: ");scanf("%d",&vong);
  if (vong<=0) {
    printf("Nhap khong hop le --- So vong dau phai lon hon 0\n");
    return 0;
  }
  srand(time(NULL));
  do {
    printf("\n_________Vong %d_________\n",dem+1);
    arena(a,b,c,0,1);
    arena(a,b,c,0,2);
    arena(a,b,c,1,2);
    dem++;
  } while (dem<vong);
  printf("____________________________________________________________\n\n");
  for (i=0;i<3;i++) {
    printf("Cac chi so moi cua dau si %d (suc manh, nhanh nhen, mau): %d %d %d\n",i+1,a[i],b[i],c[i]);
  }
  return 0;
}
  
  
