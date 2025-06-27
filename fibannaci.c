#include<stdio.h>
int main(){
	int a=0;
	int b=1;
	int num,c;
	scanf("%d",&num);
	printf("%d ",a);
	printf("%d ",b);
	int i=0;
	while(i<=num){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}
}

		
	
