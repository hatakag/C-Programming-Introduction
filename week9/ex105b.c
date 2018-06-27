#include <stdio.h>
int main() {
  int i,n,temp=0,max=0;
  printf("Nhap n: ");
  scanf("%d",&n);
  int s[n];
  for (i=0;i<n;i++) {
    printf("s[%d]=",i);scanf("%d",&s[i]);
  }
  for (i=0;i<n;i++) {
    if (s[i]==0)
      temp=temp+1;
    if (s[i]!=0) {
      if (temp>max) {
	max=temp;
	temp=0;
      }
    }
  }
  if (temp>max) max=temp;
  printf("Do dai day con bang 0 lon nhat la: %d\n",max);
  return 0;
}
