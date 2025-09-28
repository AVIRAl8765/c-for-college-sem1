// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
 int randomNum;
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    randomNum = (rand()%100)+1;
    int no_of_guessed=0;
    int guessed;
    printf("number is %d \n",randomNum);//for checking purpose 
    do {
        printf("enter your number\n");
        scanf("%d",&guessed);
        if(guessed>randomNum){
            printf("lower the number ladle \n");
        }if(guessed<randomNum){
            printf("higher the numberladle\n");
        }no_of_guessed++;
    }while(guessed!=randomNum);
        printf("you guessed the correct number in %d",no_of_guessed);

    return 0;
}
