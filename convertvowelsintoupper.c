//34. Write a C program to convert vowels into uppercase characters in a string

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e' ||str[i]=='i' ||str[i]=='o'||str[i]=='u')
			str[i]=str[i]-32;
	}
	printf("%s",str);
}
