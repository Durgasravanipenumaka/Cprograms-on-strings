//16. Write a program in C to find the number of times a given word 'the' appears in the given
//string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int j=0,count=0;
        char str[100],word[100],cmp[100];
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	fgets(word,sizeof(word),stdin);
	if(word[strlen(word)-1]=='\n')
		word[strlen(word)-1]='\0';
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i]+32;
	}
	for(int i=0;word[i]!='\0';i++){
		if(word[i]>='A'&&word[i]<='Z')
			word[i]=word[i]+32;
	}
	for(int i=0; ;i++){
		if(str[i]!=' '&&str[i]!='\0'){
			cmp[j++]=str[i];
		}
		else{
			cmp[j]='\0';
		        if(strcmp(word,cmp)==0)
		          	count++;
		j=0;
		}
	       if(str[i]=='\0')
		      break;
	}
	printf("count=%d",count);
}
