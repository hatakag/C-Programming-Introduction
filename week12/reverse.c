#include <stdio.h>
void reverseInt(int *a)
{
  int b=0,c;
  c=*a;
  do {
    b=b*10+ c%10;
    c=c/10;
  }
  while (c>0);
  *a=b;
}
int main() {
  int a;
  printf("Nhap a duong: ");scanf("%d",&a);
  if (a<=0) {
    printf("Nhap sai\n");
    return 0;
  }
  reverseInt(&a);
  printf("So dao nguoc: %d\n",a);
  return 0;
}
