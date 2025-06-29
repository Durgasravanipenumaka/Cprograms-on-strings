//27. Write a program in C to print only the string before the new line character.

#include<stdio.h>
int main(){
	char str[100];
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='\n')
			break;
        	printf("%c",str[i]);
	}
}
