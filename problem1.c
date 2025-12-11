#include<stdio.h>
#include<math.h>
int main(){
int m; 
double angleD,d,angleR; 
scanf("%d %lf %lf",&m,&angleD,&d);
double pi=3.141592653589793;
angleR = angleD*(pi/180);
double Lmax = d*sin(angleR)*1000/m;
double Lmin = 2*d*sin(angleR)*1000/(2*m-1);

        //for maxima
if (Lmax >=380 && Lmax<=450){
printf("Maxima: %0.3lf nm, Violet\n",Lmax);
}
else if (Lmax>450 && Lmax<=485){
printf("Maxima: %0.3lf nm, Blue\n",Lmax);
}
else if (Lmax >485 && Lmax<=500){
printf("Maxima: %0.3lf nm, Cyan\n",Lmax);
}
else if (Lmax >500 && Lmax<=565){
printf("Maxima: %0.3lf nm, Green\n",Lmax);
}
else if (Lmax>565 && Lmax<=590){
printf("Maxima: %0.3lf nm, Yellow\n",Lmax);
}
else if (Lmax>590 && Lmax<=625){
printf("Maxima: %0.3lf nm, Orange\n",Lmax);
}
else if (Lmax >625 && Lmax<=750){
printf("Maxima: %0.3lf nm, Red\n",Lmax);
}
else{
printf("Out of range\n");
} 

       // for minima
if (Lmin>=380 && Lmin<=450){
printf("Minima: %0.3lf nm, Violet\n",Lmin);
}
else if (Lmin>450 && Lmin<=485){
printf("Minima: %0.3lf nm, Blue\n",Lmin);
}
else if (Lmin>485 && Lmin <=500){
printf("Minima: %0.3lf nm, Cyan\n",Lmin);
}
else if (Lmin>500 && Lmin<=565){
printf("Minima: %0.3lf nm, Green\n",Lmin);
}
else if (Lmin>565 && Lmin<=590){
printf("Minima: %0.3lf nm, Yellow\n",Lmin);
}
else if (Lmin>590 && Lmin<=625){
printf("Minima: %0.3lf nm, Orange\n",Lmin);
}
else if (Lmin>625 && Lmin<=750){
printf("Minima: %0.3lf nm, Red\n",Lmin);
}
else{
printf("Out of range\n");
}

return 0;

}
