#include<stdio.h>
#include<string.h>
int main(){
	char s1[30],s2[30];
	int val;
	scanf("%s %s",s1,s2);
	printf("string1=%s\nstring2=%s\n",s1,s2);
	val=strcmp(s1,s2);
	if(val==0)
		printf("Two strings are equal");
	else
		printf("Two strings are not equal");
}
