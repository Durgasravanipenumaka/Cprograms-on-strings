#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],word[100],actualword[100];
	int found=0,k=0;
	printf("enter the string:");
	fgets(s1,sizeof(s1),stdin);
	if(s1[strlen(s1)-1]=='\n')
		s1[strlen(s1)-1]='\0';
	printf("enter the actual word:");
	fgets(actualword,sizeof(actualword),stdin);
	if(actualword[strlen(actualword)-1]=='\n')
		actualword[strlen(actualword)-1]='\0';
	for(int i=0; ;i++){

		if(s1[i]!=' '&&s1[i]!='\0'){
			word[k++]=s1[i];
		}
		else{
			word[k]='\0';
			if(strcmp(word,actualword)==0){
				found=1;
			}
			k=0;
		}
		if(s1[i]=='\0')
			break;
	}
	if(found){
		printf("string:%s",word);
	}
}





