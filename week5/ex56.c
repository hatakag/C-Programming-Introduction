#include <stdio.h>
int main()
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
