#include<stdio.h>

int main(){
	int num;
	
	printf("Enter number:-");
	scanf("%d",&num);
	
	if(num>=100 && num<=999)
	{
		printf("%d is Three Digite",num);
	}
	else{
		printf("%d is Not Three Digite Number",num);
	}
}
