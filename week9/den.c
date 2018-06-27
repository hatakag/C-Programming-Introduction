#include <stdio.h>
int main()
{
  int i,j,choice,hang,cot,a,b,cs;
  int s[5][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
  char c;
  do {
    printf("\n____MENU____\n\n");
    printf("1.Bat/tat den theo hang\n");
    printf("2.Bat/tat den theo cot\n");
    printf("3.Bat/tat den theo vi tri\n");
    printf("4.Cong suat tieu thu cua dan den hien thoi\n");
    printf("5.Thoat\n");
    printf("Chon: ");__fpurge(stdin);
    scanf("%d",&choice);
    switch (choice) {
    case 1:
      {
	printf("Chon hang ban muon bat/tat den(1-5): ");__fpurge(stdin);
	scanf("%d",&hang);
	if (hang<1||hang>5) {
	  printf("Nhap hang khong hop le\n");
	  break;
	}
	printf("Bat(B)/Tat(T): ");__fpurge(stdin);
	scanf("%c",&c);
	if (c!='B'&&c!='T') {
	  printf("Chi bat(B) hoac tat(T)\n");
	  break;
	}
	switch (hang) {
	case 1:
	  { 
	    if (c=='B') {
	      s[0][0]=1;s[0][1]=1;s[0][2]=1;
	    }
	    else {
	      s[0][0]=0;s[0][1]=0;s[0][2]=0;
	    }
	    break;
	  }
	case 2:
	  { 
	    if (c=='B') {
	      s[1][0]=1;s[1][1]=1;s[1][2]=1;
	    }
	    else {
	      s[1][0]=0;s[1][1]=0;s[1][2]=0;
	    }
	    break;
	  }
	case 3:
	  { 
	    if (c=='B') {
	      s[2][0]=1;s[2][1]=1;s[2][2]=1;
	    }
	    else {
	      s[2][0]=0;s[2][1]=0;s[2][2]=0;
	    }
	    break;
	  }
	case 4:
	  { 
	    if (c=='B') {
	      s[3][0]=1;s[3][1]=1;s[3][2]=1;
	    }
	    else {
	      s[3][0]=0;s[3][1]=0;s[3][2]=0;
	    }
	    break;
	  }
	case 5:
	  { 
	    if (c=='B') {
	      s[4][0]=1;s[4][1]=1;s[4][2]=1;
	    }
	    else {
	      s[4][0]=0;s[4][1]=0;s[4][2]=0;
	    }
	    break;
	  }
	default : printf("Nhap hang khong hop le\n"); break;
	}
	for (i=0;i<5;i++) {
	  printf("\n");
	  for (j=0;j<3;j++) {
	    if (s[i][j]==1)
	      printf("ON\t");
	    if (s[i][j]==0)
	      printf("OFF\t");
	  }
	}
	printf("\n");
	break;
      }
    case 2:
      {
	printf("Chon cot ban muon bat/tat den (1-3): ");__fpurge(stdin);
	scanf("%d",&cot);
	if (cot<1||cot>3) {
	  printf("Nhap cot khong hop le\n");
	  break;
	}
	printf("Bat(B)/Tat(T): ");__fpurge(stdin);
	scanf("%c",&c);
	if (c!='B'&&c!='T') {
	  printf("Chi bat(B) hoac tat(T)\n");
	  break;
	}
	switch (cot) {
	case 1:
	  { 
	    if (c=='B') {
	      s[0][0]=1;s[1][0]=1;s[2][0]=1;s[3][0]=1;s[4][0]=1;
	    }
	    else {
	      s[0][0]=0;s[1][0]=0;s[2][0]=0;s[3][0]=0;s[4][0]=0;
	    }
	    break;
	  }
	case 2:
	  { 
	    if (c=='B') {
	      s[0][1]=1;s[1][1]=1;s[2][1]=1;s[3][1]=1;s[4][1]=1;
	    }
	    else {
	      s[0][1]=0;s[1][1]=0;s[2][1]=0;s[3][1]=0;s[4][1]=0;
	    }
	    break;
	  }
	case 3:
	  { 
	    if (c=='B') {
	      s[0][2]=1;s[1][2]=1;s[2][2]=1;s[3][2]=1;s[4][2]=1;
	    }
	    else {
	      s[0][2]=0;s[1][2]=0;s[2][2]=0;s[3][2]=0;s[4][2]=0;
	    }
	    break;
	  }
	default : printf("Nhap cot khong hop le\n"); break;
	}
	for (i=0;i<5;i++) {
	  printf("\n");
	  for (j=0;j<3;j++) {
	    if (s[i][j]==1)
	      printf("ON\t");
	    if (s[i][j]==0)
	      printf("OFF\t");
	  }
	}
	printf("\n");
	break;
      }
    case 3:
      {
	printf("Chon vi tri cua den ban muon bat/tat (hang,cot): ");__fpurge(stdin);
	scanf("%d%*c%d",&hang,&cot);
	if (hang<1||hang>5) {
	  printf("Nhap hang khong hop le\n");
	  break;
	}
	if (cot<1||cot>3) {
	  printf("Nhap cot khong hop le\n");
	  break;
	}
	printf("Bat(B)/Tat(T): ");__fpurge(stdin);scanf("%c",&c);
	if (c=='B') s[hang-1][cot-1]=1;
	else if (c=='T') s[hang-1][cot-1]=0;
	else printf("Chi bat(B) hoac tat(T)\n");
       	for (i=0;i<5;i++) {
	  printf("\n");
	  for (j=0;j<3;j++) {
	    if (s[i][j]==1)
	      printf("ON\t");
	    if (s[i][j]==0)
	      printf("OFF\t");
	  }
	}
	printf("\n");
	break;
      }
    case 4:
      {
	cs=0;
	for (i=0;i<5;i++) {
	  for (j=0;j<3;j++) {
	    if (s[i][j]==1) {
	      if ((i%2==1)&&(j%2==1)) cs+=20;
	      else if ((i%2==0)&&(j%2==0)) cs+=10;
	      else cs+=15;
	    }
	  }
	}
	printf("\nCong suat tieu thu cua dan den hien thoi la %d W\n",cs);
	break;
      }
    case 5:
      break;
    default : printf("Chon khong hop le\n"); break;
    }
  } while (choice!=5);
  printf("\n___GOOD BYE___\n");
  return 0;
}

































































	
	  
	
