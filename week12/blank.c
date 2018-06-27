#include <stdio.h>
#include <string.h>
void trimRight(char a[])
{
  int i;
  i=strlen(a)-1;
  while (a[i]==' ' && i>=0) {
    a[i]='\0';
    i--;
  }
}
void trimLeft(char a[])
{
  int i=0;
  while (a[i]==' ') i++;
  if (a[i]!=' ')
    strcpy(a,a+i);
}
void trimMiddle(char a[])
{
  int i=0,inspace;
  inspace=0;
  while (a[i]!='\0') {
    i++;
    if (a[i]==' ')
      {
	if (inspace==0)
	  {
	    inspace=1;
	  }
	else {
	  strcpy(a+(i-1),a+i);
	  inspace=1;
	  i--;
	}
      }
    if(a[i]!=' ')
      {
	inspace=0;
      }
  } 
}
int main() {
  char a[100];
  printf("Enter a string: ");__fpurge(stdin);
  gets(a);
  printf("\"");printf("%s",a);printf("\"\n");
  trimRight(a);
  printf("\"");printf("%s",a);printf("\"\n");
  trimLeft(a);
  printf("\"");printf("%s",a);printf("\"\n");
  trimMiddle(a);
  printf("\"");printf("%s",a);printf("\"\n");
  return 0;
}
