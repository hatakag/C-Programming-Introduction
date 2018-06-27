#include <stdio.h>
int main()
{
  char str[30],str1[40],c,d;
  int x,y,z;
  long int ngay,per,thuoc,phth,noitru=150000;
  printf("Ho va ten: ");
  gets(str);__fpurge(stdin);
  printf("Ngay sinh (nn/tt/nnnn): ");
  scanf("%d%*c%d%*c%d",&x,&y,&z);__fpurge(stdin);
  printf("Ho khau: ");
  gets(str1);__fpurge(stdin);
  printf("So ngay nam vien: ");
  scanf("%ld",&ngay);__fpurge(stdin);
  if (ngay<0)
    {
      printf("Error--So ngay phai lon hon 0\n");
      return 0;
    }
  else 
    {
      printf("Tien thuoc: ");
      scanf("%ld",&thuoc);__fpurge(stdin);
      printf("Co phau thuat hay khong?(C/K) ");
      scanf("%c",&d);__fpurge(stdin);
      if (d=='C')
	{      
	  printf("Tien phau thuat: ");
	  scanf("%ld",&phth);__fpurge(stdin);
	}
      else if (d=='K')
	phth=0;
      else
	{
	  printf("Error--Chi Co(C) hoac Khong(K)\n");
	  return 0;
	}
      printf("Loai the bao hiem y te (G)old, (S)ilver hay (C)itizen (an N neu khong co the): ");
      scanf("%c",&c);__fpurge(stdin);
      if (c=='G')
	per=30;
      else if (c=='S')
	per=50;
      else if (c=='C')
	per=70;
      else if (c=='N')
	per=100;
      else
	{ 
	  printf("Error--Chi co 3 loai the bao hiem G,S hay C\n");
	  return 0;
	}
      printf("\nHOA DON THANH TOAN VIEN PHI\n");
      printf("---------------------------\n");
      printf("Ho va ten benh nhan: %s\n",str);
      printf("Ngay sinh: %02d/%02d/%04d\n",x,y,z);
      printf("Ho khau: %s\n",str1);
      printf("Phi noi tru: %ld x %ld =\t%ld\n",ngay,noitru,ngay*noitru);
      printf("Tien thuoc:           \t\t%ld\n",thuoc);
      printf("Tien phau thuat:      \t\t%ld\n",phth);
      printf("Tong:                 \t\t%ld\n",ngay*noitru+thuoc+phth);
      printf("Loai the bao hiem y te ((G)old,(S)ilver,(C)itizen hoac khong co the (N): %c\n",c);
      printf("Bao hiem chi tra:     \t\t-%ld%%\n",100-per);
      printf("Chi phi thanh toan :  \t\t%ld VND\n",(ngay*noitru+thuoc+phth)*per/100);
      return 0;
    }
}
  
