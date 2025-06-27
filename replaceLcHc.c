//15. Write a program in C to read a sentence and replace lowercase characters with uppercase
//and vice versa.

#include<stdio.h>
int main(){
	char str[100];
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i] != '\0';i++){
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;
		else if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
	}
	for(int i=0;str[i] != '\0';i++){
		printf("%c",str[i]);
	}
}
