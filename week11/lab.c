#include <stdio.h>
int main()
{
  int i,choice,may,n,max,min;
  long int sum;
  int m[40]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int c[40]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  do {
    printf("\n\n      ____LAB-813____\n\n");
    for (i=0;i<10;i++) {
      printf("%d\t%d\t%d\t%d\n",i+1,i+11,i+21,i+31);
    }
    printf("1.Dung may\n");
    printf("2.Roi may\n");
    printf("3.Trang thai cac may\n");
    printf("4.Dien nang tieu thu tich luy tren cac may den thoi diem hien tai\n");
    printf("5.Tong dien nang tieu thu - Tien dien thanh toan\n");
    printf("6.May duoc dung nhieu nhat va it nhat\n");
    printf("7.Thoat\n");
    printf("Chon: ");__fpurge(stdin);scanf("%d",&choice);
    switch (choice) {
    case 1:
      {
	printf("Dung may so (theo so do phia tren): ");__fpurge(stdin);scanf("%d",&may);
	if (may<1||may>40) {
	  printf("Nhap so may khong hop le\n");
	  break;
	}
	if (m[may-1]==1) {
	  printf("May dang duoc su dung\nVui long chon may khac\n");
	  break;
	}
	else {
	  m[may-1]=1;
	  printf("Duoc cap may\n");
	  c[may-1]=c[may-1]+1;
	}
	break;
      }
    case 2:
      {
	printf("Roi may so (theo so do phia tren): ");__fpurge(stdin);scanf("%d",&may);
	if (may<1||may>40) {
	  printf("Nhap so may khong hop le\n");
	  break;
	}
	if (m[may-1]==0) {
	  printf("May chua duoc su dung\nVui long chon may khac\n");
	  break;
	}
	else {
	  m[may-1]=0;
	  printf("Da roi may\n");
	}
	break;
      }
    case 3:
      {
	printf("\nTrang thai cac may\n");
	for (i=0;i<10;i++) {
	  printf("\n");
	  if (m[i]==1) printf("ON\t"); else printf("OFF\t");
	  if (m[i+10]==1) printf("ON\t"); else printf("OFF\t");
	  if (m[i+20]==1) printf("ON\t"); else printf("OFF\t");
	  if (m[i+30]==1) printf("ON\t"); else printf("OFF\t");
	}
	break;
      }
    case 4:
      {
	printf("\nDien nang tieu thu\n");
	for (i=0;i<10;i++) {
	  printf("\n");
	  printf("%dW\t",c[i]*400); 
	  printf("%dW\t",c[i+10]*400); 
	  printf("%dW\t",c[i+20]*400); 
	  printf("%dW\t",c[i+30]*400); 	  
	}			 
	break;
      }
    case 5:
      {
	sum=0;
	for (i=0;i<40;i++) {
	  sum=sum+c[i];
	}
	printf("Tong dien nang tieu thu: %ld W\n",sum*400);
	printf("Tien dien thanh toan: %ld VND\n",sum*300);
	break;
      }
    case 6:
      {
	max=min=c[0];
	for (i=0;i<40;i++) {
	  if (c[i]<min) min=c[i];
	  if (c[i]>max) max=c[i];
	}
	printf("\nMay duoc dung nhieu nhat: ");
	for (i=0;i<40;i++) {
	  if (c[i]==max) printf("%d ",i+1);
	}
	printf("\nMay duoc dung it nhat: ");
	for (i=0;i<40;i++) {
	  if (c[i]==min) printf("%d ",i+1);
	}  
	break;
      }     
    case 7: 
      break;
    default : printf("Chon khong hop le\n"); break;
    }
  } while (choice!=7);
  printf("\n___GOOD BYE___\n");
  return 0;
}
