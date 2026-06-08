#include<stdio.h>

int main(){
	int i=1,n;
	
	printf("Enter Number For Table:- ");
	scanf("%d",&n);
	
	while(i<=10){
		printf("\n %d * %d = %d",i,n,n*i); 
		i++;
	}
	
}
