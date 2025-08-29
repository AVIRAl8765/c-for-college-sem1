#include <stdio.h>
#include <conio.h>
void main(){
int day;
float years;
clrscr();
printf("Enter the number of days \n");
scanf("%d",&day);
years=day/365.0;
printf("Years in given number of days = %f",years);
getch();
}