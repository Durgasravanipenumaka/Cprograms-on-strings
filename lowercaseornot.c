//28. Write a program in C to check whether a letter is lowercase or not.

#include<stdio.h>
int main(){
	char ch;
	printf("Enter the single character:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		printf("Lowercase");
	else
		printf("Not a Lowercase");
}

