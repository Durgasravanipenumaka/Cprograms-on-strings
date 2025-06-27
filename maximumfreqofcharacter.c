#include<stdio.h>
int main(){
	char s1[100];
	char maxchar;
	int freq[256]={0};
	int max=0;
	fgets(s1,sizeof(s1),stdin);
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i] != ' ' && s1[i]!='\n'){
			freq[(int)s1[i]]++;
			if(freq[(int)s1[i]]>max){
				maxchar=s1[i];
				max=freq[(int)s1[i]];
			}
		}
	}
	printf("maximum repeated character=%c",maxchar);
	printf("\nmaximum frequency of the character=%d",max);
}

