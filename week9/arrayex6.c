#include <stdio.h>
int main()
{
  int square[5][5]={0};
  int product[5][6];
  int table[5][6]={ {1,2,3,4,5},
		    {2,4,6,8,10},
		    {20,10,5,3,1},
		    {3,6,9,12,15} };
  int i,j,k;
  for (i=0;i<5;i++) {
    for (j=0;j<6;j++) {
      product[i][j]=0;
      for (k=0;k<5;k++)
	product[i][j]=product[i][j]+square[i][k]*table[k][j];
    }
  }
  for (i=0;i<5;i++) {
    printf("\n");
    for (j=0;j<6;j++)
      printf("%2d ",product[i][j]);
  }
  printf("\n");
  return 0;
}
