//30. Write a program in C to check whether a character is a digit or not.

#include<stdio.h>
int main(){
        char ch;
        printf("Enter the single character:");
        scanf("%c",&ch);
        if(ch>='0' && ch<='9')
                printf("Digit");
        else
                printf("Not a Digit");
}


