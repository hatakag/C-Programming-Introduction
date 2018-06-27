#include <stdio.h>
int main()
{
  char s[40];
  int i,thang;
  double lai,tienlai,du;
  long int tien;
  printf("Ho va ten: ");
  gets(s);__fpurge(stdin);
  printf("So tien gui: ");
  scanf("%ld",&tien);__fpurge(stdin);
  printf("Lai suat 1 thang: ");
  scanf("%lf",&lai);__fpurge(stdin);
  printf("So thang gui: ");
  scanf("%d",&thang);__fpurge(stdin);
  printf("Tai khoan khach hang: %s\n",s);
  printf("Thang  Tien dau ky  Tien lai  So du\n");
  for (i=1;i<=thang;i++)
    {
      printf("%-7d%-13ld%-10.0lf%-.0lf\n",i,tien,tienlai=tien*lai/100,du=tien+tien*lai/100);
      tien = du;
    }
  return 0;
}
	
