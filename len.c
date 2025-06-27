#include<stdio.h>
int main(){
	int count=0;
        char s1[30];
        scanf("%s",s1);
        printf("string=%s",s1);
        int i=0;
        while(s1[i]!='\0'){
                count++;
                i++;
        }
        printf("\nlength of the string:%d",count);
}


