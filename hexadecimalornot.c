//23. Write a program in C to check whether a character is a Hexadecimal Digit or not

#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if((ch>='A' && ch<='F')||(ch>='a' && ch<='f')||(ch>='0' && ch<='9'))
		printf("%c is Hexa decimal character",ch);
	else
		printf("%c is not a hexadecimal character",ch);
}
