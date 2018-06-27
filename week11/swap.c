#include <stdio.h>
void swap(int *s,int size,int e)//s[]
{
  int tmp,i=0;
  for (i=0;i<size-e;i++) {
    tmp=s[i];//*(s+i),*(s+(i+e))
    s[i]=s[i+e];
    s[i+e]=tmp;
  }
}
int main(void) {
  int size,e;
  printf("Enter size: ");scanf("%d",&size);
  printf("Enter difference: ");scanf("%d",&e);
  if (e>=size) {
    printf("Invalid input\n");
    return 0;
  }
  int s[size],i;
  for (i=0;i<size;i++) {
    printf("s[%d]=",i);scanf("%d",&s[i]);
  }
  printf("\nBefore swap: ");
  for (i=0;i<size;i++) 
    printf("%d ",s[i]);
  swap(s,size,e);
  printf("\n After swap: ");
  for (i=0;i<size;i++)
    printf("%d ",s[i]);
  printf("\n");
}
