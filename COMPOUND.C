//program for calculating compound_intrests
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
float p,r,t,amount,ci;
clrscr();
printf("Enter the pricipal amount \n");
scanf("%f",&p);
printf("Enter the rate of intrest \n");
scanf("%f",&r);
printf("Enter the time period \n");
scanf("%f",&t);
amount = p* pow((1+r/100),t);
ci=amount-p;
printf("The coumpound intrest on the given principal is %f",ci);
printf("The total amount after compound intrest is %f",amount);
getch();
}
