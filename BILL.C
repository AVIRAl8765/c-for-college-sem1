//monthly bill
#include<stdio.h>
#include<conio.h>
void main(){
float u,bill;
clrscr();
printf("Enter your units consumed\n");
scanf("%f",&u);
if(u<100){
printf("yor bill is rupees 250 \n");
}else if(u>100 && u<=150){
bill=250.0+(u-100.0)*0.4;
printf("your bill is rupees %.2f \n",bill);
}else if(u>150 && u<=200){
bill =270.0+(u-150.0)*0.5;
printf("your bill is rupees %.2f \n",bill);
}else{
printf("loop ended");
}
getch();
}