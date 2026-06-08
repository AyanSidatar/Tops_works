#include<stdio.h>

int main(){
	int num1;
	
	printf("Enter number 1:-");
	scanf("%d",&num1);
	
//	printf("\n\n Number 1:-%d",num1);
		
	if(num1>=10 && num1<=99){
		printf("The Number %d is Tow Degite:-",num1);
	}
	else if(num1>=100 && num1<=999){
		printf("The Number %d is Three Digite:-",num1);
	}
	else{
		printf("Number is Higher Then Tow or Three Digite");
	}
}
