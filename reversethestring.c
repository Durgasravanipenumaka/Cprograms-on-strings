//Reversal of the string.

#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	int temp,len;
	scanf("%s",s1);
	printf("string : %s",s1);
	len=strlen(s1);
	for(int i=0;i<len/2;i++){
		temp=s1[i];
		s1[i]=s1[len-1-i];
		s1[len-1-i]=temp;
	}
	printf("\nString after reverse : %s",s1);
}
