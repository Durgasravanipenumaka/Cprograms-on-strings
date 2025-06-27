//Number of words in the given string.

#include<stdio.h>
int main(){
	char s1[100];
	int count=1;
	fgets(s1,sizeof(s1),stdin);
	printf("string : %s",s1);
	for(int i=0 ;s1[i]!='\0';i++){
		if(s1[i] ==' ' || s1[i] == '\n'|| s1[i] == '\t')
			count++;
	}
	printf("\nNo of words in a string:%d",count-1);
}

