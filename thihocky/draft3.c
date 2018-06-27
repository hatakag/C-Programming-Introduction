#include <stdio.h>
#include <string.h>
#include <ctype.h>
void nameslice (char username[]) //trimleft// 
 {                                //trimright all space first//
  int i=strlen(username)-1;
  while (username[i]!=' ' && i>=0) i--;
  if (username[i]==' ') strcpy(username,username+(i+1));
}
char * nameslice1 (char username[]) //trimleft// 
{                                //trimright all space first//
  int i=strlen(username)-1;
  while (username[i]!=' ' && i>=0) i--;
  if (username[i]==' ')
    return username+(i+1);
 }
char * capitalize1 (char * str)
{
  int i;
  for (i=0;i<strlen(str);i++)
    {
      if (str[i]>='a' && str[i]<='z')
	str[i]='A'+(str[i]-'a');
    }
  return str;
}
int main() 
{
  typedef struct {
    char name[30];
    char slice[30];
    char capitalize[30];
  } student;
  int i,j,k;
  student data[i];    
  char tmp[30];
  int n=2;
  for (i=0;i<n;i++) {
    printf("ho va ten: ");__fpurge(stdin);gets(data[i].name);
    strcpy(data[i].capitalize,capitalize1(data[i].name));
    strcpy(data[i].slice,nameslice1(data[i].name));
    printf("%s\n",data[i].name);
  }  
  for (i=0;i<n;i++) {
    for (j=i+1;j<n;j++) {
      if (strcmp(data[i].slice,data[j].slice)>0) {
	strcpy(tmp,data[i].name);
	strcpy(data[i].name,data[j].name);
	strcpy(data[j].name,tmp);
      }
    }
  }
  for (i=0;i<n;i++) {
    printf("%s\n",data[i].name);
  }
}
  
  
