#include <stdio.h>
int main()
{ 

  char str1[30], str2[3], str3[100], str4[30];
  long int mssv;
  int day1, month1, year1, day2, month2, year2, day3, month3, year3, khoa;

  printf("Ma so sinh vien: ");
  scanf("%ld", &mssv);
  printf("Ho va ten: ");__fpurge(stdin);
  gets(str1);
  printf("Ngay sinh (dd-mm-yyyy): ");
  scanf("%d%*c%d%*c%d", &day1, &month1, &year1);
  printf("Gioi tinh: ");
  scanf("%s", str2);
  printf("Ho khau: ");__fpurge(stdin);
  gets(str3);
  printf("Lop :");
  scanf("%s", str4);
  printf("Khoa hoc: ");
  scanf("%d", &khoa);
  printf("Co gia tri den (dd-mm-yyyy): ");
  scanf("%d%*c%d%*c%d", &day2, &month2, &year2);
  printf("Ngay phat hanh (dd-mm-yyyy): ");
  scanf("%d%*c%d%*c%d", &day3, &month3, &year3);
  printf("\u256D");
  int i;
  for ( i=0; i < 53; i++ ) {
    printf("\u2500");
      }
  printf("\u256E\n");
  printf("\u2502\u250C\u2500\u2500\u2510                                                 \u2502\n");
  printf("\u2502\u2502  \u2502         %s         \u2502\n","TRUONG DAI HOC BACH KHOA HA NOI");
  printf("\u2502\u2514\u2500\u2500\u2518                 %s                   \u2502\n","THE SINH VIEN");
  printf("\u255E");
  int x;
  for ( x=0; x < 53; x++ ) {
    printf("\u2550");
      }
  printf("\u2561\n");
  printf("\u2502\u250C\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2510                                           \u2502\n");
  printf("\u2502\u2502        \u2502 %s: %08ld                            \u2502\n","MSSV", mssv);
  printf("\u2502\u2502        \u2502 %s: %-20s              \u2502\n","Ho ten", str1);
  printf("\u2502\u2502        \u2502 %s: %02d/%02d/%04d             %3s     \u2502\n","Ngay sinh",day1,month1,year1,str2);
  printf("\u2502\u2502        \u2502 %s: %-20s             \u2502\n","Ho khau",str3);
  printf("\u2502\u2502        \u2502 %s: %-10s                           \u2502\n","Lop",str4); 
  printf("\u2502\u2514\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2518 %s: K%02d   Co gia tri den: %02d/%02d/%04d\u2502\n","Khoa hoc",khoa,day2,month2,year2);
  printf("\u2502 %s: %02d/%02d/%04d              || | |    | |  | | |   \u2502\n","NPH",day3,month3,year3);
  printf("\u2570");
  int a;
  for ( a=0 ; a < 53; a++) {
    printf("\u2500");
  }
  printf("\u256F\n");
}
