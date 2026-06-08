#include<stdio.h>

int main(){
	int i,n,choice,tn,fect=1,sum=0;
	
	while(1){
		printf("\n\n1. EvenNumberChack \n2. Factorial \n3. SumOf_N_Number \n4. Table \n5. Exit \n\n\n");
		printf("Enter Your Choice - ");
		scanf("%d",&choice);
		
		if(choice>0 && choice<5){
			printf("Enter Value To Perform Task - ");
			scanf("%d",&tn);
			
			switch(choice){
			case 1: 
			{
				if(tn%2==0){
					printf("\nNumber %d is Even",tn);
				}else printf("\nNot Even Number");
				break;
			}
			case 2: 
			{
				for(i=1;i<=tn;i++){
					fect=fect*i;
				}
				printf("\nFectorial of %d is %d",tn,fect);
				break;
			}
			case 3: 
			{
				sum=0;
				for(i=1;i<=tn;i++){
					sum=sum+i;
				}
				printf("\nSums of %d is %d",tn,sum);
				break;
			}
			case 4: 
			{
				for(i=1;i<=10;i++){
					printf("\n%d * %d = %d",tn,i,tn*i);
				}
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
