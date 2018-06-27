#include <stdio.h>
int main()
{
  int x;
  printf("What is student's grade? ");
  scanf("%3d",&x);
  if (x>=90)
    printf("A\n");
  else 
    if (x>=80)
      printf("B\n");
    else 
      if (x>=70)
	printf("C\n");
      else 
	if (x>=60)
	  printf("D\n");
        else
	  printf("F\n");
  return 0;
}
