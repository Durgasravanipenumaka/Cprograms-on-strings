//3. Write a program in C to separate individual characters from a string.

#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	//int len;
	scanf("%s",s1);
	printf("Input string:%s",s1);
	//len=strlen(s1);
	printf("\nThe characters of the string are:");
	for(int i=0;s1[i]!='\0';i++){
		printf("%c ",s1[i]);
	}
}
