#include <stdio.h>
int main()
{
  char s[40];
  int i,nam=0,choice;
  double lai=0,tienlai,du;
  long int tien=0;
  do {
    printf("\n\nTAI KHOAN TIEN GUI ACB\n");
    printf("1.Gui tien va thoi han\n");
    printf("2.Lai suat nam\n");
    printf("3.Chi tiet lai suat\n");
    printf("4.Thoat\n");
    printf("Chon: ");
    scanf("%d",&choice);__fpurge(stdin);
    switch(choice) {
    case 1:
      {	
	printf("\nHo va ten: ");
	gets(s);__fpurge(stdin);
	printf("So tien gui: ");
	scanf("%ld",&tien);__fpurge(stdin);
	printf("So nam gui: ");
	scanf("%d",&nam);__fpurge(stdin);
	break;
      }
    case 2:
      {
	printf("\nLai suat 1 nam (%%): ");
	scanf("%lf",&lai);__fpurge(stdin);
	break;
      }
    case 3:
      {
	if (((tien==0)||(nam==0))&&(lai==0))
	  printf("\nNhap tien gui, thoi han gui va lai suat nam (lon hon 0) o muc 1 va 2 truoc\n");
	else if ((tien==0)||(nam==0))
	  printf("\nNhap tien gui va thoi han gui (lon hon 0) o muc 1 truoc\n");
	else if (lai==0)
	  printf("\nNhap lai suat nam (lon hon 0) o muc 2 truoc\n");
	else
	  {
	    printf("\nTai khoan khach hang: %s\n\n",s);
	    printf("Nam    Tien dau ky         Tien lai            So du\n");
	    for (i=1;i<=nam;i++)
	      {
		printf("%-7d%-20ld%-20.0lf%-.0lf\n",i,tien,tienlai=tien*lai/100,du=tien+tien*lai/100);
		tien = du;
	      }
	  }
	break;
      }
    case 4:
      break;
    default: printf("Input is not valid\n"); break;
    }
  } while (choice != 4);
  printf("\nGOOD BYE\n");
  return 0;
}
