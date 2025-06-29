//26. Write a program in C to count the number of punctuation characters present in a string.

#include<stdio.h>
int main(){
	char str[100];
	int count=0;
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='!')
			count++;
	}
	printf("count=%d",count);
}

