#include<stdio.h>

int main(){
	int n,i,temp;
	printf("Enter Number for Sereise -");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("Number is not Prime");
			break;
		}
		else{
			temp=1;
		}
	}
	if(temp==1){
		printf("%d is Prime Number",n);
	}
}
