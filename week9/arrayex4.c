#include <stdio.h>
int main()
{
  int square[5][5]={0};
  int i,j,temp=1;
  for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
      square[i][j]=temp;
      temp++;
    }
  }
  for (i=0;i<5;i++) {
    printf("\n");
    for (j=0;j<5;j++)
      printf("%2d ",square[i][j]);
  }
  printf("\n");
  return 0;
}
