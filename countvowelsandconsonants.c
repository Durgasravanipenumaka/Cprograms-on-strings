#include<stdio.h>
int main(){
	char s1[100];
	int vowels=0,consonants=0;
	fgets(s1,sizeof(s1),stdin);
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
			vowels++;
		else if((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z')) 
			consonants++;
	}
	printf("vowels=%d\nconsonants=%d",vowels,consonants);
}
