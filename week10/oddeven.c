#include <stdio.h>
int DigitAllSame(int n)
{
  int digit;
  int even,odd;
  even=1;odd=1;
  while (n>0) {
    digit=n%10;
    n=n/10;
    if (digit%2==0) {
      even=even*1;
      odd=odd*0;
    }
    else {
      even=even*0;
      odd=odd*1;
    }
  }
  if (even) return 1;
  else if (odd) return -1;
  else return 0;
}
main() {
  int n;
  printf("Nhap so: ");scanf("%d",&n);
  printf("So %d co gia tri ham la (1-all even,-1-all odd,0-odd and even): %d\n",n,DigitAllSame(n));
}

