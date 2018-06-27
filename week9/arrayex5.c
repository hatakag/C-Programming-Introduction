#include <stdio.h>
int main()
{
  int table[5][6]={ {1,2,3,4,5},
		    {2,4,6,8,10},
		    {20,10,5,3,1},
		    {3,6,9,12,15} };
  int i,j,temp1,temp2;
  for (j=0;j<6;j++) {
    temp1=0;
    for (i=0;i<5;i++) {
      table[4][j]=temp1;
      temp1=temp1+table[i][j];
    }
  }
  for (i=0;i<5;i++) {
    temp2=0;
    for (j=0;j<6;j++) {
      table[i][5]=temp2;
      temp2=temp2+table[i][j];
    }
  }
  for (i=0;i<5;i++) {
    printf("\n");
    for (j=0;j<6;j++) 
      printf("%2d ",table[i][j]);
  }
  printf("\n");
  return 0;
}
