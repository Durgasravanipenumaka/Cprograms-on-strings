#include<stdio.h>
int main(){
	char str[100];
	int freq[256]={0};
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '&&str[i]!='\n'){
		       freq[(int)str[i]]++;
		}
	}
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' ' && str[i]!='\n' && freq[(int)str[i]]!=0){
		       printf("frequency of %c is %d\n",str[i],freq[str[i]]);
		       freq[(int)str[i]]=0;
		}
	}
}
