#include <stdio.h>
int main()
{
  int stt,day,month,year,hour1,min1,hour2,min2;
  char tenlop[10],tenmonhoc[20];
  printf("So thu tu: ");
  scanf("%d", &stt);
  printf("Ngay thang (dd mm yyyy): ");
  scanf("%d%*c%d%*c%d", &day, &month, &year);
  printf("Ten lop: ");__fpurge(stdin);
  gets(tenlop);
  printf("Ten mon hoc: ");__fpurge(stdin);
  gets(tenmonhoc);
  printf("Bat dau luc (hh:mm): ");
  scanf("%d%*c%d", &hour1, &min1);
  printf("Ket thuc luc: ");
  scanf("%d%*c%d", &hour2, &min2);
  printf("%-5s %-12s %-10s %-20s %-8s %-8s\n","STT","Ngay thang","Ten lop","Ten mon hoc","Bat dau","Ket thuc");
  printf("%-5d %02d/%02d/%-6d %-10s %-20s %02d:%02d    %02d:%02d\n",stt,day,month,year,tenlop,tenmonhoc,hour1,min1,hour2,min2);
  return 0;
}
