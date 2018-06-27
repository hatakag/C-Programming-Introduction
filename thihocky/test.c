#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
  typedef struct {
    int id;
    char name[30];
    int x,y;
    int r;
  } station;
  station list[50];
  int n,i,j,k,n1,N;
  int check2,check3,check;
  int choice;
  do {
    printf("\n\n_____MENU_____\n\n");
    printf("1.Nhap tram moi thu phat\n");
    printf("2.Bo sung tram thu phat\n");
    printf("3.Xem danh sach tram thu phat\n");
    printf("4.Tinh toan khoang cach\n");
    printf("5.Thoat\n");
    printf("Chon: ");__fpurge(stdin);
    scanf("%d",&choice);
    switch (choice) {
    case 1:
      {
	do{
	  printf("Nhap so luong tram: ");
	  scanf("%d", &n);__fpurge(stdin);
	  if (n < 1 || n > 50) 
	    printf("Error--So tram phai nam trong khoan tu 1 den 50 \n\n");
	} while(n < 1 || n > 50);		
	
	for (i=0;i<n;i++) {
	  printf("\nThong tin tram thu phat:\n");
	  do {
	    printf("Ho ten nguoi truong tram: ");gets(list[i].name);__fpurge(stdin);
	    check2=0;
	    if (list[i].name[strlen(list[i].name)-1]==' ') {
	      printf("Cuoi ten khong duoc co dau trang\n");
	      check2=1;
	    }
	    check3=1;
	    for (k=strlen(list[i].name)-1;k>=0;k--) {
	      if (list[i].name[k]==' ') {
		check3=0;
		break;
	      }
	    }
	    if (check3==1) printf("Giua ho va ten phai co khoang trang\n");
	  } while (check2==1 || check3==1);
	  do {
	    printf("Ma so tram thu phat: ");scanf("%d",&list[i].id);__fpurge(stdin);
	    if (list[i].id<=0) 
	      printf("Error--Ma so tram thu phat phai la so nguyen duong\n");
	    check=0;
	    for (j=0;j<n;j++) {
	      if (list[i].id==list[j].id && i!=j) {
		check=1;
		printf("Error--Moi tram co 1 ma so rieng\n");
		break;
	      }
	    }
	  } while( list[i].id<=0 || check==1);
	  do {
	    printf("Ban kinh phu song cua tram: ");scanf("%d",&list[i].r);__fpurge(stdin);
	    if (list[i].r<1 ||list[i].r>100)
	      printf("Error--Ban kinh phai nam trong khoang tu 1 den 100\n");
	  } while (list[i].r<1 ||list[i].r>100);
	  printf("Hoanh do va tung do cua tram: ");scanf("%d %d",&list[i].x,&list[i].y);__fpurge(stdin);
	}
	
	break;
      }
    case 2:
      {
	if (n==0) {
	  printf("\nNhap tram moi truoc\n");
	  break;
	}
	do{
	  printf("Nhap so luong tram bo sung: ");
	  scanf("%d", &n1);__fpurge(stdin);
	  if (n < 1 || n > 50) 
	    printf("Error--So tram phai nam trong khoan tu 1 den 50 \n\n");
	  
	} while(n < 1 || n > 50);		
	
	
	for (i=0;i<n;i++) {
	  printf("\nThong tin tram thu phat:\n");
	  do {
	    printf("Ho ten nguoi truong tram: ");gets(list[i].name);__fpurge(stdin);
	    check2=0;
	    if (list[i].name[strlen(list[i].name)-1]==' ') {
	      printf("Cuoi ten khong duoc co dau trang\n");
	      check2=1;
	    }
	    check3=1;
	    for (k=strlen(list[i].name)-1;k>=0;k--) {
	      if (list[i].name[k]==' ') {
		check3=0;
		break;
	      }
	    }
	    if (check3==1) printf("Giua ho va ten phai co khoang trang\n");
	  } while (check2==1 || check3==1);
	  do {
	    printf("Ma so tram thu phat: ");scanf("%d",&list[i].id);__fpurge(stdin);
	    if (list[i].id<=0) 
	      printf("Error--Ma so tram thu phat phai la so nguyen duong\n");
	    check=0;
	    for (j=0;j<n;j++) {
	      if (list[i].id==list[j].id && i!=j) {
		check=1;
		printf("Error--Moi tram co 1 ma so rieng\n");
		break;
	      }
	    }
	  } while (list[i].id<=0 || check==1);
	  do {
	    printf("Ban kinh phu song cua tram: ");scanf("%d",&list[i].r);__fpurge(stdin);
	    if (list[i].r<1 ||list[i].r>100)
	      printf("Error--Ban kinh phai nam trong khoang tu 1 den 100\n");
	  } while (list[i].r<1 ||list[i].r>100);
	  printf("Hoanh do va tung do cua tram: ");scanf("%d %d",&list[i].x,&list[i].y);__fpurge(stdin);
	}
	
	break;
      }
    case 3:
      {
	printf("%-6s %-30s %-10s\t %-10s\n","ID","Ho ten","Toa do","Ban kinh");
	for (i=0;i<n;i++) {
	  printf("%-6d %-30s (%-d,%-d) \t %d\n",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r);
	}
	break;
      }
    case 4:
      {
	printf("%-6s %-30s %-10s\t %-10s %-10s\n","ID","Ho ten","Toa do","Ban kinh");
	
	break;
      }
    case 5:
      break;
    default : printf("CHON KHONG HOP LE\n");
      break;
    }
  } while (choice != 5);
  printf("\n___GOODBYE___\n");
  return 0;
}
