//4. Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>
#include<string.h>
int main(){
	char name[30];
	int len,temp;
	scanf("%s",name);
	printf("name=%s\n",name);
	len=strlen(name);
	for(int i=0;i<len/2;i++){
		temp=name[i];
		name[i]=name[len-1-i];
		name[len-1-i]=temp;
	}
	printf("string after reversing:%s",name);
}

