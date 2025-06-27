#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100],word[100],cmp[100];
	int j=0,count=0;
	fgets(str,sizeof(str),stdin);
	fgets(word,sizeof(word),stdin);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' ' || str[i]!='\n' || str[i]!='\0'){
			cmp[j++]=str[i];
		}
		char a[10] = tolower(word);
		char b[10] = tolower(cmp);
		int c = strcmp(word,cmp);
		if(c)
			count++;
	}
	printf("count=%d",count);
}


