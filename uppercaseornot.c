//24. Write a program in C to check whether a letter is uppercase or not.

#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("%c is in uppercase",ch);
	else
	printf("%c is not in uppercase",ch);
}	
