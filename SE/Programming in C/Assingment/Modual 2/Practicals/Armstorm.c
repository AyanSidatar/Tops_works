#include<stdio.h>

int main(){
	int tmp,n,rem,sum=0;
	printf("Enter Number for Armstorm -");
	scanf("%d",&n);
	
	tmp=n;
	
	while(n!=0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(tmp==sum){
		printf("The Number is Armstrom");
	}
	else printf("The Number is not Armstrom");
}
