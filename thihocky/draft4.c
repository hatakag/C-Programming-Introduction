#include <stdio.h>
#include <string.h>
int main() {
  char s[50];
  char c,c1;
  int i,j,k,count=0;
  printf("Nhap xau: ");__fpurge(stdin);gets(s);
  char sao[strlen(s)];
  for (i=0;i<strlen(s);i++) {
    sao[i]='*';
  }
  printf("Doan 1 chu: ");__fpurge(stdin);scanf("%c",&c);
  for (i=0;i<strlen(s);i++) {
    if (s[i]==c) {
      sao[i]=c;
      count++;
    }
  }
  printf("%s\n",sao);
  printf("Doan 1 chu: ");__fpurge(stdin);scanf("%c",&c1);
  for (i=0;i<strlen(s);i++) {
    if (s[i]==c1) {
      sao[i]=c1;
      count++;
    }
  }
  printf("%s\n",sao);
}
