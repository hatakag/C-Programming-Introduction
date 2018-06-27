#include <stdio.h>
int main()
{
  char x,y[ 9 ];
  printf("Enter a string : " );
  scanf("%c%s", &x,y);
  printf("The printf was : \n");
  printf("the character \"%c\"",x );
  printf("and the string \"%s\"",y);
  return 0;
}
