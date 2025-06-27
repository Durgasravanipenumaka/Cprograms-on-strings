#include<stdio.h>
int main(){
	char s1[100],s2[100];
	fgets(s1,sizeof(s1),stdin);
	int i;
	for(i=0;s1[i]!='\0';i++){
		s2[i]=s1[i];
	}
	s2[i]='\0';
	for(int i=0;s2[i]!='\0';i++){
		printf("%c",s2[i]);
	}
}
		
