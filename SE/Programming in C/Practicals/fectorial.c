#include<stdio.h>

int main()
{
	int i=1,sum=0,n;
	
	printf("Enter Number For Factorial -");
	scanf("%d",&n);
	
	do{
		sum=sum+i;
		i++;
	}while(i<=n);
	
	printf("sum of numbers is %d",sum);
}
