#include<stdio.h>

int main(){
	int i,n,tmp,count=0,rem,choice,tn,fect=1,sum=0;
	
	while(1){
		printf("\n\n1. Prime Number \n2. No of Digits \n3. Sum of Digits \n4. Perfect Number \n5. Arstraong number \n6. Exit \n\n\n");
		printf("Enter Your Choice - ");
		scanf("%d",&choice);
		
		if(choice>0 && choice<6){
			printf("Enter Value To Perform Task - ");
			scanf("%d",&tn);
			
			switch(choice){
			case 1: 
			{
				for(i=2;i<tn;i++){
					if(tn%i==0){
						printf("%d Number is not Prime",tn);
						break;
					}
				}
				break;
			}
			case 2: 
			{
				while(tn!=0){
					rem=tn%10;
					count++;
					tn=tn/10;
				}
				printf("total digit is %d",count);
				break;
			}
			case 3: 
			{
				while(tn!=0){
					rem=tn%10;
					count++;
					sum+=rem;
					tn=tn/10;
				}
				printf("total digit is %d",sum);
				printf("total digit is %d",count);
				break;
			}
			case 4: 
			{
				for(i=1;i<tn;i++){
					if(tn%i==0){
						sum=sum+i;
					}
				}
				if(sum==tn){
					printf("%d Perfect No",tn);
				}
	
				else {
					printf("%d is not Perfect No",tn);
				}
				break;
			}
			case 5:
			{
				n=0;
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
				break;
			}
			default: 
			{
				printf("Enter valied Choice");
				break;
			}
		}
		}
		else{
			printf("Byeee!!!");
			break;
		}
	}
}
