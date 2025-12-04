#include<stdio.h>
#include<math.h>
int main()
{
double ang1, radA, ang2, angFinal;
double pi=3.1416;
ang1 =65;
radA =ang1*(pi/180);
ang2 = asin((1400*sin(radA))/1590);

angFinal = ang2*(180/pi);
printf("%.3lf degree",angFinal);
return 0;
}