#include <stdio.h>
int main()
{
  int square[5][5]={0};
  int i,j;
  for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
      if (i==j)
	square[i][j]=(i+1)*(i+1);
    }
  }
  for (i=0;i<5;i++) {
    printf("\n");
    for (j=0;j<5;j++) {
      if (square[i][j]!=0)
	printf("%2d ",square[i][j]);
      if (square[i][j]==0)
	printf("   ");
    }
  }
  printf("\n");
  return 0;
}
