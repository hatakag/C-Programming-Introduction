#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int my,yo;
  srand(time(NULL));
  my = 1 + rand () % 10;
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
