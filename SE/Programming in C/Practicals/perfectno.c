#include<stdio.h>

int main(){
	int i,n,sum=0;
	printf("Enter Number for Sereise -");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
		printf("%d Perfect No",n);
	
	else 
		printf("%d is not Perfect No",n);
}
