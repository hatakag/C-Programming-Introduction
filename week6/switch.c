#include <stdio.h>
int main()
{
  char c;
  int newln,tabs;
  printf("Enter a character: ");
  c = getchar();
  switch (c) {
  case '0' : printf("Zero\n"); break;
  case '1' : case '2': case '3': case '4':
  case '5' : case '6': case '7': case '8':
  case '9' : printf("Nine\n"); break;
  case ' ':
  case '\n' : newln++; break;
  case '\t' : tabs++; break;
  default: printf("missing char\n"); break;
  }
}	      
