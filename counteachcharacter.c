//33. Write a C program to count each character in a given string.

#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int freq[100];
        int found=0;
        fgets(str,sizeof(str),stdin);
        if(str[strlen(str)-1]=='\n'){
                str[strlen(str)-1]='\0';
        }
        for(int i=0;str[i]!='\0';i++){
                freq[i]=-1;
        }
        for(int i=0;str[i]!='\0';i++){
                int count=1;
                if(freq[i]==-1){
                        for(int j=i+1;str[j]!='\0';j++){
                                if(str[i]==str[j]){
                                        count++;
                                        freq[j]=0;
                                }
                        }
                        freq[i]=count;
                }
 }
        for(int i=0;str[i]!='\0';i++){
                if(freq[i]!=0){
                        printf("%c repeates %d times\n",str[i],freq[i]);
                }
        }
}
