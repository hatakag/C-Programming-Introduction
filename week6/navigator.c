#include <stdio.h>
#include <math.h>
int main()
{
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
