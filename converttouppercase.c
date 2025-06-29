//21. Write a program in C to convert a string to uppercase.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	for(int i=0;str[i]!='\0';i++){
		str[i]=toupper(str[i]);
	}
	printf("string in uppercase:%s",str);
}
