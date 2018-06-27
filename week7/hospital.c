#include <stdio.h>
int main()
{
  char str[40],str1[50],a,b,d;
  int x,y,z,i,n=1,g=0,s=0,c=0;
  double av;
  long int ngay,per,thuoc,phth,noitru=150000,fee,sum=0,tong,max=0;
  for (i=1;i<=n;i++)
    {
      printf("\n\nHo va ten: ");
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
	      printf("Error-- Chi Co(C) hoac Khong(K)\n");
	      return 0;
	    }
	  printf("Loai the bao hiem y te (G)old, (S)ilver hay (C)itizen (an N neu khong co the): ");
	  scanf("%c",&a);__fpurge(stdin);
	  if (a=='G') {
	    per=30;
	    g=g+1;
	  }
	  else if (a=='S') {
	    per=50;
	    s=s+1;
	  }
	  else if (a=='C') {
	    per=70;
	    c=c+1;
	  }
	  else if (a=='N')
	    per=100;
	  else
	    { 
	      printf("Error--Chi co 3 loai the bao hiem G,S hay C\n");
	      return 0;
	    }
	  printf("\n\nHOA DON THANH TOAN VIEN PHI\n");
	  printf("---------------------------\n");
	  printf("Ho va ten benh nhan: %s\n",str);
	  printf("Ngay sinh: %02d/%02d/%04d\n",x,y,z);
	  printf("Ho khau: %s\n",str1);
	  printf("Phi noi tru: %ld x %ld =\t%ld\n",ngay,noitru,ngay*noitru);
	  printf("Tien thuoc:           \t\t%ld\n",thuoc);
	  printf("Tien phau thuat:      \t\t%ld\n",phth);
	  printf("Tong:                 \t\t%ld\n",tong=ngay*noitru+thuoc+phth);
	  printf("Loai the bao hiem y te ((G)old,(S)ilver,(C)itizen hoac khong co the (N): %c\n",a);
	  printf("Bao hiem chi tra:     \t\t-%ld%%\n",100-per);
	  printf("Chi phi thanh toan :  \t\t%ld VND\n",fee=tong*per/100);
	  printf("\n\nBan co muon thoat khong (C/K): ");
	  scanf("%c",&b);__fpurge(stdin);
	  if (b=='C')
	    n=n;
	  else if (b=='K')
	    n=n+1;
	  else
	    {
	      printf("Error--Chi Co(C) hoac Khong(K)\n");
	      return 0;
	    }
	  sum = sum + fee;
	  max < (tong-fee) ? (max = tong - fee) : (max = max);
	}
    }
  printf("\n\nBAO CAO CHUNG\n");
  printf("--------------------------\n");
  printf("So benh nhan: %d\n",n);
  printf("So tien trung binh benh nhan phai tra: %.0lf VND\n",av=sum/n);
  printf("So the bao hiem y te cua tung loai: %d G, %d S, %d C\n",g,s,c);
  printf("Loi nhuan cao nhat tu bao hiem ma mot benh nhan co the nhan: %ld\n",max);
  return 0;
}
