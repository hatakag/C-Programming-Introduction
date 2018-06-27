#include <stdio.h>
int main()
{
  printf("%s\n","HA NOI");
  printf("%s\n","Vietnam");
  printf("%d/%d, %d:%d AM\n",9,20,10,10);
  printf(" \n");
  printf("\u2600 %s\n","Partly Cloudly");
  printf("\u2191 %d\u00B0 \u2193 %d\u00B0\n",30,24);
  printf(" \n");
  printf("\u2550\u2550\u2557 \u2554\u2550\u2557 \u26AA\n");
  printf(" \u2550\u2563 \u2551 \u2551  C\n");
  printf("\u2550\u2550\u255D \u255A\u2550\u255D  F\n");
  printf(" \n");
  printf("┌─────────────────────────────────┐ ┌─────────────────────────────────┐\n");
  printf("│ %s                        │ │ %s                         │\n","Forecast","Details");
  printf("│ ─────────────────────────────── │ │ ─────────────────────────────── │\n");
  printf("│ %s ^                   │ │             %s      %d\u00B0 │\n","Temperature","Feels like",32);
  printf("│ ─────────────                   │ │             ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %dPM %dPM %dPM %dPM %dPM %dPM %dPM  │ │             %s        %d%% │\n",6,7,8,9,10,11,12,"Humidity",65);
  printf("│  ☁   ☁   ☁   ☁   ☁    ☁   ☁     │ │     ☁       ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %d° %d° %d°  %d° %d°  %d° %d°   │ │             %s  %5.2fkm │\n",28,28,28,27,27,26,26,"Visibility",16.1);
  printf("│                                 │ │             ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %s    ☁     %d%%    %d° %d°  │ │             %s     %d(Low) │\n","Tuesday", 5, 30, 24,"UV Index", 0);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │ │ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %s  ☁     %d%%    %d° %d°  │ │ Tonight - Mostly cloudly. Winds │\n","Wednesday", 0, 31, 23);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │ │ variable at %d mph.The overnight │\n",7);
  printf("│ %s   ☁     %d%%    %d° %d°  │ │ low will be %d°F.               │\n","Thursday", 0, 31, 23,76);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │ │ Today-Mostly cloudly with a high│\n");
  printf("│ %s     ☁    %i%%    %i° %i°  │ │ of %i°F. Winds variable at %i to │\n","Friday", 25 , 31, 24,87,7);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │ │ %i mph.                         │\n",11);
  printf("│ %s   ☁   %d%%    %d° %d°  │ └─────────────────────────────────┘\n","Saturday", 100, 28, 24);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %s     ☁   %d%%    %d° %d°  │\n","Sunday", 100, 28, 24);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %s     ☁    %d%%    %d° %d°  │\n","Monday", 20, 29, 25);
  printf("│ ┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈ │\n");
  printf("│ %d DAY | %d DAY                  │\n",5,10);
  printf("└─────────────────────────────────┘\n");
 }
