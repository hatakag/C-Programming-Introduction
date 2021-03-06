#include <stdio.h>
#include <stdlib.h> //atof,atoi,atol//
#include <ctype.h> //tolower,isalpha,isdigit,isspace//
#include <limits.h> //limit int ...INT_MAX,INT_MIN//
int main() 

//____MENU_____//
{
  int n;
  int choice;
  do {
    printf("\n_____MENU_____\n\n");
    printf("1.Nhap lieu\n");
    printf("2.\n");
    printf("3.\n");
    printf("4.\n");
    printf("5.Thoat\n");
    printf("Chon: ");__fpurge(stdin);
    scanf("%d",&choice);
    switch (choice) {
    case 1:
      {
	do{
	  printf(": ");
	  scanf("%d", &n);
	  if (n <= 0 || n > MAX) 
	    printf("Error--\n\n");
	}while(n <= 0 || n > MAX);		
	
	break;
      }
    case 2:
      {
	if (n==0) {
	  printf("\nNhap lieu truoc\n");
	  break;
	}
	break;
      }
    case 3:
      {
	break;
      }
    case 4:
      {
	break;
      }
    case 5:
      break;
    default : printf("CHON KHONG HOP LE\n");
      break;
    }
  } while (choice != 5);
  printf("\n___GOODBYE___\n");
  return 0;
}

// STRUCT //
typedef struct student {
  char name[40];
  int id;
  float grade;
} student_t;
student_t data[10];
for (i=0;i<10;i++) {
  printf("Student's name: ");gets(data[i].name);__fpurge(stdin);
  printf("Student's ID: ");scanf("%d",&data[i].id);__fpurge(stdin);
  printf("Student's grade: ");scanf("%f",&data[i].grade);__fpurge(stdin);
 }

// SO SANH STRUCT //
if  ((strcmp(data[i].name,data[j].name)==0) &&
     data[i].id==data[j].id)
  printf("Du lieu trung nhau\n");
#include <ctype.h>
char tmp[];
for (i=0;i<n;i++) {
  for (j=i+1;j<n;j++) {
    if (strcmp(tolower(data[i].name),tolower(data[j].name))>=0) {
      data[i].name=tmp;
      data[i].name=data[j].name;
      data[j].name=tmp;
    }
  }
 }


// IN HOA TEN //
char * capitalize (char * str)
{
  int i;
  for (i=0;i<strlen(str);i++)
    {
      if ((str[i]>='a' && str[i]<='z')&&(i==0||str[i-1]==' '))
	str[i]='A'+(str[i]-'a');
    }
  return str;
}

// IN MA TRAN //
{
  for (i=0;i<5;i++) {
    printf("\n");
    for (j=0;j<3;j++) {
      printf("%d\t",s[i][j]);
    }
  }
}

// DO DAI DAY CON BANG 0 LIEN TIEP //
{
  int i,n,temp=0,max=0;
  printf("Nhap n: ");
  scanf("%d",&n);
  int s[n];
  for (i=0;i<n;i++) {
    printf("s[%d]=",i);scanf("%d",&s[i]);
  }
  for (i=0;i<n;i++) {
    if (s[i]==0)
      temp=temp+1;
    if (s[i]!=0) {
      if (temp>max) {
	max=temp;
	temp=0;
      }
    }
  }
  if (temp>max) max=temp;
  printf("Do dai day con bang 0 lon nhat la: %d\n",max);
  return 0;
}

// LAM TRON // (int)f[i]+0.5 
float lamtron(float a) //9.17->9.2 // round(a*10)/10 <math.h> -lm
{
  float i,j;
  j=(int)(a*10);
  i=a*10-j;
  if (i<0.5) a=j/10;
  else a=(j+1)/10;
  return a;
}

// ARRAY // week9

// MIN,MAX in ARRAY //
{
  min=max=a[0];
  for (i=0;i<max;i++) {
    if (a[i]<min) min=a[i];    
    if (a[i]>max) max=a[i];
  }
}

// NHAN 2 ARRAY //
int i,j,k;
for (i=0;i<5;i++) {
  for (j=0;j<6;j++) {
    product[i][j]=0;
    for (k=0;k<5;k++)
      product[i][j]=product[i][j]+square[i][k]*table[k][j];
  }
 }

// SWAP ARRAY THEO BAC //
void swap(int s[],int size,int e)//*s
{
  int tmp,i=0;
  for (i=0;i<size-e;i++) {
    tmp=s[i];//*(s+i),*(s+(i+e))
    s[i]=s[i+e];
    s[i+e]=tmp;
  }
}

// SWAP ARRAY & DEM SO LAN XUAT HIEN TRONG ARRAY //
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void main() {
  int i,n,j,dem;
  printf("Input n: ");
  scanf("%d",&n);
  int s[n];
  for (i=0;i<n;i++) {
    printf("s[%d]=",i); scanf("%d",&s[i]);
  }
  for (i=0;i<n-1;i++) {
    for (j=i+1;j<n;j++) {
      if (s[i]>s[j]) swap(&s[i],&s[j]);
    }
  }
  i=0;j=0;dem=0;
  while (i<n) {
    dem=0;
    j=i;
    while (s[i]==s[j]) {
      dem++;j++;
    }
    printf("\n%d occurs for %d times in array\n",s[i],dem);
    i=j;
  }
}

// LOCAL MAXIMUM SUM //
for (i=1;i<(max-1);i++) {
  if (a[i]>=a[i-1] && a[i]>=a[i+1])
    sum += a[i];
 }

// SORTING ARRAY // (Cao > Thap)
void sort (int a[],int n)
{
  int tmp,i,j;
  for (i=0;i<n;i++) {
    for (j=i+1;j<n;j++) {
      if (a[i]<a[j]) {
	tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
      }
    }
  }
}

// REVERSE ARRAY CONTENT //
void reverse (float a[i],int n) 
{
  int i;
  float tmp;
  for (i=0;i<n/2;i++) {
    tmp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=tmp;
  }
}

// CAN LE //
{
  printf("%-5s %-12s %-10s %-20s %-8s %-8s\n","STT","Ngay thang","Ten lop","Ten mon hoc","Bat dau","Ket thuc");
  printf("%-5d %02d/%02d/%-6d %-10s %-20s %02d:%02d    %02d:%02d\n",stt,day,month,year,tenlop,tenmonhoc,hour1,min1,hour2,min2);
}

// NAMESLICE & SORTING //
#include <string.h>
void trimright ( char username[]) //trimright//
{
  int i=0;
  while (username[i]!=' ' && username[i]!='\0') i++;
  if (username[i]==' ') username[i]='\0';
}

#include <stdio.h>
#include <string.h>
void nameslice (char username[]) //trimleft// 
{                                //trimright all space first//
  int i=strlen(username)-1;
  while (username[i]!=' ' && i>=0) i--;
  if (username[i]==' ') strcpy(username,username+(i+1));
}
int main() 
{
  char s[30],x[30];
  printf("ho va ten: ");__fpurge(stdin);gets(s);
  nameslice(s);
  printf("ho va ten: ");__fpurge(stdin);gets(x);
  nameslice(x);
  if (strcmp(s,x)<=0) printf("%s %s\n",s,x);
  else printf("%s %s\n",x,s);
}


// TIM PHAN TU TRONG STRING // (ten trong cac ten viet duoi dang sring 2d)
{
  char s[a][b]={};
  char lookup[b], *strtmp=NULL;
  int i;
  printf("Search for: ");
  scanf("%s",lookup);
  for (i=0;i<a;i++) {
    strtmp=strstr(s[i],lookup);//strtmp=lookup//
    if (strtmp!=NULL) break;
  }
  if (strtmp==NULL) 
    printf("No matching found\n");
  else 
    printf("%s\n",s[i]);
}

// TRIM STRING  // 
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
 
// AVERAGE //
{
  int n;
  printf("The number of all students: ");
  scanf("%d",&n);
  printf("The number of students in the smallest class: %d\n",n/7);
  printf("The number of students in the largest class: %d\n",(n+6)/7);
  printf("The average number of students per class: %f\n",n/7.0);
  printf("The number of classes of above average size: %d\n",n%7);
  printf("The number of classes of at most average size: %d\n",7-n%7);
  printf("The number of students in the classes of larger than average size: %d\n",(n%7)*((n+6)/7));
  printf("The number of classes of exactly average size: %d\n",(n%7==0)*7);
}

// DIRECTION //
{
  double heading;
  printf("Enter a compass heading (0.0-360.0 degree)> ");
  scanf("%lf",&heading);
  if (heading<0.0)
    printf("Error--negative heading (%.1f): must be between 0 and 360\n",heading);
  else if (heading<90.0)
    printf("The bearing is north %.1f degrees east\n",heading);
  else if (heading<180.0)
    printf("The bearing is north %.1f degrees west\n",180.0-heading);
  else if (heading<270.0)
    printf("The bearing is south %.1f degrees west\n",heading-180.0);
  else if (heading<=360.0)
    printf("The bearing is south %.1f degrees east\n",360.0-heading);
  else 
    printf("Error--heading > 360 (%.1f): must be between 0 and 360\n",heading);
  return 0;
}

// NAVIGTOR //
float x,y,a,b,d;
  printf("Enter your position's coordinates (x-horizontal axis,y-vertical axis): ");
  scanf("%f%*c%f",&x,&y);
  printf("Enter your destination's coordinates (x,y): ");
  scanf("%f%*c%f",&a,&b);
  if (x>180||x<-180||y>90||y<-90||a>180||a<-180||b>90||b<-90)
    printf("Error__180>=x>=-180 and 90>=y>=-90\n");
  else
  {
    if (x==0&&y==0)
      printf("You are in the center of the map\n");
    else if (x==0&&y>0)
      printf("You are in the north of the map\n");
    else if (x==0&&y<0)
      printf("You are in the south of the map\n");
    else if (x>0&&y==0)
      printf("You are in the east of the map\n");
    else if (x<0&&y==0)
      printf("You are in the west of the map\n");
    else if (x>0&&y>0)
      printf("You are in the north east of the map\n");
    else if (x>0&&y<0)
      printf("You are in the south east of the map\n");
    else if (x<0&&y>0)
      printf("You are in the north west of the map\n");
    else 
      printf("You are in the south west of the map\n");
    d=(x-a)*(x-a)+(y-b)*(y-b);
    printf("The distance between your position and your destination is %f\n",sqrt(d));
  }
}

// RANDOM //
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int my,yo;
  srand(time(NULL));
x  my = 1 + rand () % 10;
  printf("Guess my number (between 1 and 10): ");
  scanf("%d",&yo);
  if (yo<my) {
    printf("Your guess was too small.\n");
  } else if (yo>my) {
    printf("Your number was too high.\n");
  } else {
    printf("You got it!\n");
  return 0;
  }
  printf("The correct number was %d.\n",my);
return 0;
}

// RANDOM ARRAY // srand(time(NULL)) phai de trong ham main trong truong hop random number trong function khac
#include <stdlib.h>
#include <time.h>
#define size 50
int main() {
  int i,s[size],temp,j;
  srand(time(NULL));
  for (i=0;i<size;i++) {
    s[i] = 1 + rand () % size;
  }
}

// FUNCTION // week10

// ISPRIME // week10/prime.c

// PRIME NUMBER //
#include <stdio.h>
#include <math.h>
int main()
{
  int i,j;
  printf("%d\n",2);
  for (i=3;i<=100;i++)
    {
      for (j=2;j<i;j++)
	{
	  if (i%j==0)
	    break;
	  if (j>sqrt(i))
	    {
	      printf("%d\n",i);
	      break;
	    }
	}
    }
  return 0;
}

// BLANK //
{
  int c,inspace;
  inspace=0;
  while ((c=getchar())!=EOF)
    {
      if (c==' ')
	{
	  if (inspace==0)
	    {
	      inspace=1;
	      putchar(c);
	    }
	}
      if(c!=' ')
	{
	  inspace=0;
	  putchar(c);
	}
    }
  return 0;
}

// HINH // week8/hinh.c

// CAN,SIN,E^ // 
double can(double x, double e)
{
  double ketqua,canx;
  canx=(x+1)/2;
  do {
    ketqua=canx;
    canx=0.5*(canx+x/canx);
  }
  while (fabs(canx-ketqua)>e);
  return canx;
}
double sine(double x, double e)
{
  int i=0;
  double temp,sinx;
  sinx=temp=x;
  while (temp>e) {
    i++;
    temp=temp*x*x/(2*i+1)/(2*i);
    if (i%2==0) sinx=sinx+temp;
    else sinx=sinx-temp;
  }
  return sinx;
}
double em(double x, double e)
{
  int i=0;
  double temp,emx;
  emx=1+x,temp=x;
  while (temp>e) {
    i++;
    temp=temp*x/i;
    emx=emx+temp;
  }
  return emx;
}

// PERFECTNUMBER,PRIMENUMBER,DIVISOR under N// week8/num2.c

// REVERSE NUMBER //
{
  int a,b=0,c=0;
  printf("Enter the number you want to reverse: ");
  scanf("%d",&a);
  b=a;
  do {
    c=c*10+b%10;
    b=b/10;
  }
  while (b>0);
  printf("The reversed number of %d is %d\n",a,c);
  return 0;
}

// PHAN TIEN //
{
  long int a=500000,b=200000,c=100000,d=50000,e=20000,f=10000,g=5000,t;
  printf("\nTien (chan 5000): "); 
  scanf("%ld",&t);
  if ((t%5000!=0)||(t<=0))
    {
      printf("\nNhap khong hop le\n\n");
      return 0;
    }
  int t1=t%a;
  int t2=t1%b;
  int t3=t2%c;
  int t4=t3%d;
  int t5=t4%e;
  int t6=t5%f;
  printf("\n%ld = %ld to 500000 + %ld to 200000 + %ld to 100000 + %ld to 50000 + %ld to 20000 + %ld to 10000 + %ld to 5000\n",t,t/a,t1/b,t2/c,t3/d,t4/e,t5/f,t6/g);
  return 0;
}

// MONTH STRING //
char [12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
