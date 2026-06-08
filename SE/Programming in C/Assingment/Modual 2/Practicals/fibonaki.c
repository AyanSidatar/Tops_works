#include<stdio.h>

int main(){
	int i,n,val1=0,val2=1,sum;
	 printf("Enter Number for Sereise -");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++){
	 	printf("\t %d",val1);
	 	
	 	sum=val1+val2;
	 	val1=val2;
	 	val2=sum;
	 }
}
