#include <stdio.h>
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void main() {
  int i,n,j,dem;
  printf("Input n: ");
  scanf("%d",&n);
  int s[n];
  for (i=0;i<n;i++) {
    printf("s[%d]=",i); scanf("%d",&s[i]);
  }
  for (i=0;i<n-1;i++) {
    for (j=i+1;j<n;j++) {
      if (s[i]>s[j]) swap(&s[i],&s[j]);
    }
  }
  i=0;j=0;dem=0;
  while (i<n) {
    dem=0;
    j=i;
    while (s[i]==s[j]) {
      dem++;j++;
    }
    printf("\n%d occurs for %d times in array\n",s[i],dem);
    i=j;
  }
}
