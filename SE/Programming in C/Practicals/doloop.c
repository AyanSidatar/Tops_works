#include<stdio.h>

int main()
{
	int i=1,n;
	
	printf("Enter number ");
	scanf("%d",&n);
	
	do{
		printf("\n %d * %d = %d",n,i,i*n);
		i++;
	}while(i<=10);
} 
