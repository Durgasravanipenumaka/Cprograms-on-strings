#include<stdio.h>
int main(){
	char s1[30],s2[30];
	int flag=0;
	scanf("%s %s",s1,s2);
	printf("string1=%s\nstring2=%s\n",s1,s2);
	for(int i=0;s1[i]!='\0' && s2[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			flag=1;
			break;
		}
	}
	if(flag)
		printf("strings are not equal");
	else
		printf("strings are equal");
}


