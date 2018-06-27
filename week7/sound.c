#include <stdio.h>
int main()
{
  float speed,distance,time;
  char c;
  printf("Select (A)ir, (W)ater or (S)teel: ");
  scanf("%c",&c);
  switch (c) {
  case 'A' : speed=1100; break;
  case 'W' : speed=4900; break;
  case 'S' : speed=16400; break;
  default : printf("Error--A, W or S\n");return 0; break;
  }
  printf("Input distance: ");
  scanf("%f",&distance);
  if (distance<=0)
    printf("Error--distance must be greater than 0\n");
  else
    printf("The time the sound will take: %f\n",time=distance/speed);
  return 0;
}
