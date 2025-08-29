// program for temprature conversions
#include <stdio.h>
#include <conio.h>
void main(){
float c , feh;
clrscr();
printf("enter the temprature in celcius degree \n");
scanf("%f",&c);
feh=1.8*c+32;
printf("temprature in fehrenhit is %f",feh);
getch();

}
