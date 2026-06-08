#include<stdio.h>

int main()
{
	int i=1,choice,n1,n2;
	
	while(1){
		printf("\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division \n 5. Exit \n\n\n\n");
		printf("Enter Your choice -");
		scanf("%d",&choice);
		
		if(choice==5){
			printf("Byeeee!!!");
			break;
		}
		printf("Enter 2 Number for Task -");
		scanf("%d %d",&n1,&n2);
		
		switch(choice){
			case 1: printf("Addition is - %d",n1+n2);
				break;
			case 2: printf("Substraction is - %d",n1-n2);
				break;
			case 3: printf("Multiplication is - %d",n1*n2);
				break;
			case 4: printf("Division is - %d",n1/n2);
				break;
			default: printf("Enter Valied Choice");
				break;
		}
	}
}
