 #include<stdio.h>

int main(){
	int roll[10],i=0,j=0,n,tmp=0;
	for(i=0;i<5;i++){
		printf("Enter A Roll No -");
		scanf("%d",&roll[i]);
	}
//	for(i=0;i<5;i++){
//		printf("\nRoll No is - %d",roll[i]);
//	}
	
	printf("\nEnter Number To Search -");
	scanf("%d",&n);
	
	for(i=0;i<5;i++){
		if(roll[i]==n){
			printf("\n\nThe Number %d You Search is at Index %d",n,i);
			break;
		}
		else {
			tmp=1;
		}
	}
	if(tmp==1)
		printf("Not Available in Array");
}
