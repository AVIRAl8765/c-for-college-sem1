#include <stdio.h>
#include<conio.h>
void main(){
float sal,net_sal;
clrscr();
printf("enter your sal \n");
scanf("%f",&sal);
if(sal<=50000.0){
printf("you arent into paying taxes \n");
}else if (sal>50000.0 && sal<60000.0){
 net_sal=(sal-50000.0)*0.1;
 printf("your salary is into 10%% tax indexation  %.2f\n", net_sal);
 printf("your salary after tax deduction is  %.2f\n",sal-net_sal);
}else{
net_sal=(sal-60000.0)+1000.0*0.2;
printf("you need to pay 20 as tax %.2f /n",net_sal);
 printf("your salary after deduction is %.2f \n",sal-net_sal);
}
getch();
}
