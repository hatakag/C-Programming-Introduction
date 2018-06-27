#include <stdio.h>
#include <string.h>
int main () 
{
  int N=0,tmp=0;
  int choice;
  typedef struct {
    int mssv;
    char name[30];
    float hd,pb;
    float hdd[3];
  } student;
  do {
    printf("\n_____MENU_____\n");
    printf("1.Bo sung sinh vien\n");
    printf("2.Danh sach sinh vien da bao ve thanh cong\n");
    printf("3.Sap xep theo ten sinh vien\n");
    printf("4.Thoat\n");
    printf("Chon: ");__fpurge(stdin);
    scanf("%d",&choice);
    switch (choice) {
    case 1:
      {
	int n=0,i,j,l,k;
	do {
	  printf("Nhap so sinh vien: ");
	  scanf("%d",&n);
	  if (n<=0 || n>20 )
	    {
	      printf("So sinh vien phai lon hon 0 va nho hon 20\n");
	    }
	} while (n<=0 || n>20);
	N=N+n;
	if (N>20) {
	  printf("Tong so sinh vien toi da la 20\n");
	  N=N-n;
	  break;
	}
	int check,check2,check3,check4,check5,check6;
	student data[N];
	for (i=tmp;i<N;i++) {
	  printf("DU LIEU SINH VIEN THU %d\n",i+1);
	  do {
	    printf("MSSV: ");__fpurge(stdin);scanf("%d",&data[i].mssv);
	    if (data[i].mssv <0 || data[i].mssv > 100000) {
	      printf("MSSV co khong qua 5 ky tu\n");
	    }
	  } while ( data[i].mssv <0 || data[i].mssv > 100000);
	  for (j=0;j<i;j++) {
	    printf("%d %d %d %d",i,j,data[i].mssv,data[0].mssv);
	    if (data[i].mssv==data[j].mssv) {
	      printf("Moi sinh vien co mot mssv rieng\n");
	      break;
	    }
	  }
	  do {	   
	    printf("Ho ten: ");__fpurge(stdin);gets(data[i].name);
	    check2=0;
	    if (data[i].name[strlen(data[i].name)-1]==' ') {
	      printf("Cuoi ten khong duoc co dau trang\n");
	      check2=1;
	    }
	    check3=1;
	    for (k=strlen(data[i].name)-1;k>=0;k--) {
	      if (data[i].name[k]==' ') {
		check3=0;
		break;
	      }
	    }
	    if (check3==1) printf("Giua ho va ten phai co khoang trang\n");
	  } while (check2==1 || check3==1);
	  do {
	    check4=0;
	    printf("Diem huong dan: ");__fpurge(stdin);scanf("%f",&data[i].hd);
	    if (data[i].hd<0 || data[i].hd>10) {
	      printf("Diem phai nam trong khoang 0 den 10\n");
	      check4=1;
	    }
	  } while (check4==1);
	  do {
	    check5=0;
	    printf("Diem phan bien: ");__fpurge(stdin);scanf("%f",&data[i].pb);
	    if (data[i].pb<0 || data[i].pb>10) {
	      printf("Diem phai nam trong khoang 0 den 10\n");
	      check5=1;
	    }
	  } while (check5==1);
	  for (l=0;l<3;l++) {
	    do {	    
	      check6=0;
	      printf("Diem hoi dong %d: ",l+1);__fpurge(stdin);scanf("%f",&data[i].hdd[l]);
	      if (data[i].hdd[l]<0 || data[i].hdd[l]>10) {
		printf("Diem phai nam trong khoang 0 den 10\n");
		check6=1;
	      }
	    } while (check6==1);	
	  } 
	}
	tmp=n;      
	break;
      }
    case 2:
      {
	break;
      }
    case 3:
      {
	break;
      }
    case 4:
      break;
    default : printf("\nChon khong hop le\n");
      break;
    }
  } while (choice != 4);
  printf("\n___GOODBYE___\n");
  return 0;
}
