//17. Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
int main(){
	char str[100];
	int k=0;
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';i++){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
			str[k++]=str[i];
	}
	str[k]='\0';
	for(int i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}

}

