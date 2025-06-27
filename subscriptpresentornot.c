//14. Write a C program to check whether a substring is present in a string.

#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	int len1,len2,found=0;
	printf("Enter the string:");
	fgets(s1,sizeof(s1),stdin);
	printf("Enter the substring:");
	fgets(s2,sizeof(s2),stdin);
	len1=strlen(s1);
	len2=strlen(s2);
	for(int i=0;i<=len1-len2;i++){
		int j;
		for(j=0;j<len2;j++){
			if(s1[i+j] != s2[j])
				break;
		}
		        if(j==len2){
			       found=1;
			       break;
	        	}
	}
	if(found)
		printf("substring is present");
	else
		printf("substring is not present");
}
