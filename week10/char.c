#include <stdio.h>
void printnchars (int ch, int n)
{
  int i;
  for (i=1;i<=n;i++)
    printf("%c",ch);__fpurge(stdin);
}
int getad()
{
  int count=0;
  char c;
  do {
    scanf("%c",&c);__fpurge(stdin);
    if (((c>=48)&&(c<=57))||((c>=65)&&(c<=90))||((c>=97)&&(c<=122)))
      return c;
    else {
      printf("Invalid input__Re-enter character ");
      count++;
    }
  } while (count<=3);
  printf("The number of wrong input depass 3\n");
  return '#';
}
int main()
{
  int i;
  for (i=0;i<=5;i++) {
    printnchars('*',i);
    printf("\n");
  }
  printf("\n");
  int j;
  for (j=0;j<=9;j++) {
    if (j==0||j==9)
      printnchars('*',9);
    else {
      printf("*");printnchars(' ',7);printf("*");
    }
    printf("\n");
  }
  char k;
  printf("Input a alphabetical character or a digit: ");
  k=getad();
  printf("Character: %c\n",k);
  return 0;
}
