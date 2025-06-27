//13. Write a program in C to extract a substring from a given string.

#include<stdio.h>
int main(){
	char s1[100];
	int a,b;
	fgets(s1,sizeof(s1),stdin);
	printf("input the position to start extraction:");
	scanf("%d", &a);
	printf("\nInput the length of the string :");
	scanf("%d",&b);
	for(int i=a-1;i<a-1+b;i++){
		printf("%c",s1[i]);
	}
}

