#include<stdio.h>
int main(){
	char s1[100];
	int temp;
	fgets(s1,sizeof(s1),stdin);
	for(int i=0;s1[i]!='\0';i++){
		for(int j=i+1;s1[j]!='\0';j++){
			if((int)s1[i] > (int)s1[j]){
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
		}
	}
	for(int i=0;s1[i]!='\0';i++){
		printf("%c",s1[i]);
	}
}

