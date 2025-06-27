//concatination of a string without using library function.

#include<stdio.h>
#include<string.h>
int main(){
	int len1,len2;
	char s1[30],s2[7];
	scanf("%s %s",s1,s2);
	printf("string1:%s",s1);
	printf("\nstring2:%s",s2);
	len1=strlen(s1);
	len2=strlen(s2);
	for(int i=0;i<len2;i++){
		s1[len1+i]=s2[i];
	}
	str[len1+len2]='\0';
	printf("\nstring after concatination:%s",s1);
}
	

