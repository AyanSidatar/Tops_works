#include<stdio.h>

int main(){
	int count=0,n,rem,sum=0;
	printf("Enter Number for Sereise -");
	scanf("%d",&n);
	
	while(n!=0){
		rem=n%10;
		count++;
		sum+=rem;
		n=n/10;
	}
	printf("total digit is %d",count);
	printf("sum is %d",sum);

}
