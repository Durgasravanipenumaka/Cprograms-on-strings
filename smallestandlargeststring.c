//Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
#include<string.h>
int main(){
	char str[100],word[100],largest[50],smallest[20];
	int count=0,j=0,max=0,min=999;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	for(int i=0; ;i++){
		if(str[i]!='\0'&&str[i]!=' ')
			word[j++]=str[i];
		else{
			word[j]='\0';
			count=strlen(word);
			if(count>max){
				max=count;
				strcpy(largest,word);
			}
			if(count<min){
				min=count;
				strcpy(smallest,word);
			}
			j=0;
		}
		if(str[i]=='\0')
			break;
	}
	printf("Largest word :%s\n",largest);
	printf("Smallest word :%s",smallest);
}
