#include <stdio.h>
int main()
{
  char ch1,ch2;
  printf("Input the first character:");//line1
  scanf("%c",ch1);
  printf("Input the second character:");//line2
  ch2 = getchar();
  printf("ch1=%c,ASCII code = %d\n",ch1,ch1);
  printf("ch2=%c,ASCII code = %d\n",ch2,ch2);
  return 0;
}
//SOLUTION: scanf("%c%*c,&ch1);
//where %*c accept anf ignores the newline
//or :while ( getchar()!='\n');
