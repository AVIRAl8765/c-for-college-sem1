// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char seq[100];
    int i,j,flag = 1;
    printf("enter a sequence of string\n");
    scanf("%s",&seq);
    i = 0;
    j= strlen(seq)-1;
    while (i<j){
        if (seq[i] != seq[j]){
            flag = 0;
            break;
        }
        i++;
        --j;
        
        }
        if (flag){
            printf("The sequence is a palindrome. \n");
            
        } else{
            printf("the sequencw isnt palindrome. \n");
        }
    

    return 0;
}
