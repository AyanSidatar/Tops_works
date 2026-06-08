#include<stdio.h>

int main()
{
    int num,i=0,val1=0,val2=1,sum;
    
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		printf("\t%d",val1);
		sum=val1+val2;
		val1=val2;
		val2=sum;
	}	
}