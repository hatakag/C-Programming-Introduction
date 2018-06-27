#include<stdio.h>
#include<string.h>
#define MAX 10

typedef struct {
  char hoten[30];
  int diem[5];
} ketquathidau;

void MENU(){ //In menu
  printf("\n\t\tMENU\n");
  printf("1. DANG KI VAN DONG VIEN\n");
  printf("2. THI DAU\n");
  printf("3. XEP HANG\n");
  printf("4. SIEU XA THU\n");
  printf("5. QUIT\n\n");
}

int INPUT_NUMBER(){ //Nhap so vdv
  int n;
  do{
    printf("SO VAN DONG VIEN: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX) //check size
      printf("SO VAN DONG VIEN PHAI LON HON 0 VA NHO HON HOAC BANG 10!\n\n");
  }while(n <= 0 || n > MAX);		
}

void INPUT_NAME(ketquathidau vdv[], int n){ //Nhap ket qua thi dau
  int check,i,j;
  for(i = 0; i < n; i++){
    do{			
      printf("\nVAN DONG VIEN SO %d:\n", i + 1);
      printf("HO TEN: ");
      while(getchar() != '\n');
      scanf("%[^\n]s", vdv[i].hoten);
      check = 0;
      for(j = 0; j < strlen(vdv[i].hoten); j++){ //check khoang trang
	if(vdv[i].hoten[j] == ' '){
	  check = 1;
	  break;
	}
      }
      if(check == 0){
	printf("HO TEN VAN DONG VIEN PHAI CHUA KHOANG TRANG!\n");
      }
    }while(check == 0);
  }
}

void DANHSACH(ketquathidau vdv[], int n){ //In ra danh sach thi dau
  int i;
  printf("\n\tDANH SACH THI DAU\n\n");
  printf("STT\t\t\tHO TEN\n");
  for(i = 0; i < n; i ++){
    printf("%d\t\t\t%s\n", i+1, vdv[i].hoten);
  }
}

void THIDAU(ketquathidau vdv[], int n){ //Nhap ket qua thi dau
  int i,j;
  for (i = 0; i < n; i ++){
    printf("\nKET QUA THI DAU CUA VDV %d:\n", i + 1);
    for(j = 0; j < 5; j ++){
      do{
	printf("DIEM #%d: ", j +1);
	scanf("%d", &vdv[i].diem[j]);
	if(vdv[i].diem[j] < 0 || vdv[i].diem[j] > 10) //check diem
	  printf("SO DIEM PHAI LON HON 0 VA NHO HON 10!\n\n");
      }while(vdv[i].diem[j] < 0 || vdv[i].diem[j] > 10);
    }
  }
}

void KETQUATHIDAU(ketquathidau vdv[], int n){
  int i;
  printf("\n\t\t\t\tKET QUA THI DAU\n\n");
  printf("%-30s%-10s%-10s%-10s%-10s%-10s\n\n", "HO TEN", "1", "2", "3", "4", "5");
  for(i = 0; i < n; i ++){
    printf("%-30s%-10d%-10d%-10d%-10d%-10d\n", vdv[i].hoten, vdv[i].diem[0], vdv[i].diem[1], vdv[i].diem[2], vdv[i].diem[3], vdv[i].diem[4]);
  }
}

void XEPHANG(ketquathidau vdv[], int n){ //In danh sach nhan huy chuong
	int max1=0;
	int max2=0;
	int max3=0;
	int i, j;
	int SUM[n];
	for(i = 0; i < n; i ++){
		SUM[i] = 0;
		for(j = 0; j < 5; j++){
		  SUM[i] += vdv[i].diem[j];
		}
	} //Tinh tong diem
	for(i = 0; i < n; i++){
	  if(max1 < SUM[i]){
	    max1 = SUM[i];
	  }
	} //Tim Gold
	for(i = 0; i < n; i++){
	  if(max2 < SUM[i] && SUM[i] != max1){
	    max2 = SUM[i];
	  }
	} //Silver
	for(i = 0; i < n; i++){
	  if(max3 < SUM[i] && SUM[i] != max1 && SUM[i] != max2){
	    max3 = SUM[i];
	  }
	} //Brozen
	printf("\n\tDANH SACH NHAN HUY CHUONG\n\n");
	for(i = 0; i < n; i ++){ //In Gold
	  if(SUM[i] == max1){
	    printf("%-30sGold\t%d\n", vdv[i].hoten, SUM[i]);
	  }
	}
	for(i = 0; i < n; i ++){ //In Silver
	  if(SUM[i] == max2){
	    printf("%-30sSilver\t%d\n", vdv[i].hoten, SUM[i]);
	  }
	}
	for(i = 0; i < n; i ++){ //In Brozen
	  if(SUM[i] == max3){
	    printf("%-30sBrozen\t%d\n", vdv[i].hoten, SUM[i]);
	  }
	}
}

void SIEUXATHU(ketquathidau vdv[], int n){ //Tim sieu xa thu
  int check,i,j;
  printf("\n\t\tDANH SACH SIEU XA THU\n\n");
  for(i = 0; i < n; i ++){
    check = 0;
    for(j = 0; j < 5; j ++){
      if(vdv[i].diem[j] == 10 && vdv[i].diem[j+1] == 10 && vdv[i].diem[j+2] == 10){
	check = 1;
	break;
      }
    }
    if (check == 1){
      printf("%s\n", vdv[i].hoten);
    }
  }
}


void main(){
  ketquathidau vdv[MAX];
  int n;
  int choice;
  do{
    MENU();
    printf("CHOICE: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
      n = INPUT_NUMBER();
      INPUT_NAME(vdv, n);
      DANHSACH(vdv, n);
      break;
    case 2:
      THIDAU(vdv, n);
      KETQUATHIDAU(vdv, n);
      break;
    case 3:
      XEPHANG(vdv, n);
      break;
    case 4:
      SIEUXATHU(vdv, n);
      break;
    case 5:
      break;
    default:
      printf("INVALID VALUE!!\n");
      break;
    }
  }while (choice != 5);
}
