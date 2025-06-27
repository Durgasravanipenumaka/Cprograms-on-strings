#include<stdio.h>
int main(){
	int alph=0,digits=0,specials=0;
	char s1[100];
	fgets(s1,sizeof(s1),stdin);
	printf("%s",s1);
	for(int i=0;s1[i]!='\0';i++){
		if((s1[i]>='A' && s1[i]<='Z') || (s1[i]>='a' && s1[i]<='z'))
			alph++;
		else if(s1[i]>='0' && s1[i]<='9')
			digits++;
		else
			specials++;
	}
	printf("Alphates=%d\nDigits=%d\nSpecial symbols=%d",alph,digits,specials);
}
