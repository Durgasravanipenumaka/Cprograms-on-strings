#include<stdio.h>
int main(){
	char s1[100],s2[100],str[100];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	int k=0;
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]=='\n'){
			s1[i]='\0';
			break;
		}
	}
	for(int i=0;s2[i]!='\0';i++){
                if(s2[i]=='\n'){
                        s2[i]='\0';
			break;
		}
        }
	for(int i=0;s1[i]!='\0';i++){
		str[k++]=s1[i];
	}
	for(int i=0;s2[i]!='\0';i++){
		str[k++]=s2[i];
	}
	str[k]='\0';
	for(int i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}
}


