#include<stdio.h>

int main(){
	int i,n;
	
	printf("Enter Number For Table To Display - ");
	scanf("%d",&n);
	
	if(n%2==0){
		for(i=1;i<=10;i++){
			printf("\n %d * %d = %d",n,i,n*i);  
		}
	}
	else{
		printf("You can only multiply Even Number");
	}

}
