#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 50
int main() {
  int i,s[size],temp,j;
  srand(time(NULL));
  for (i=0;i<size;i++) {
    s[i] = 1 + rand () % size;
  }
  for (i=0;i<size;i++) {
    printf("%d\t",s[i]);
  }
  printf("\n");
  for (i=0;i<size-1;i++) {
    for (j=i+1;j<size;j++) {
      if (s[i]>s[j]) {
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
      }
    }
    printf("%d\t",s[i]);
  }
  printf("\n");
  return 0;
}
