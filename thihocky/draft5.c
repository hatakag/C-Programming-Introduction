#include <stdio.h>
#include <string.h>
int main () 
{
  int n=0,tmp=0;
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
	do {
	  printf("Nhap so sinh vien: ");
	  scanf("%d",&n);
	  if (n<=0 || n>20 )
	    {
	      printf("So sinh vien phai lon hon 0 va nho hon 20\n");
	    }
	} while (n<=0 || n>20);
