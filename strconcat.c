#include<stdio.h>
#include<string.h>
int main(){
	char s1[30],s2[30];
	scanf("%s%s",s1,s2);
	printf("string1=%s,\nString2=%s",s1,s2);
	strcat(s1,s2);
	printf("\n%s",s1);
}
