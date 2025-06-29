//31. Write a program in C to split strings by space into words.


#include<stdio.h>
#include<string.h>
int main(){
	char str[100],word[100];
	int k=0;
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	for(int i=0; ;i++){
		if(str[i]!=' ' && str[i]!='\0')
			word[k++]=str[i];
		else{
			word[k]='\0';
			printf("%s\n",word);
			k=0;
		}
		if(str[i]=='\0')
			break;
	}
}
