 #include<stdio.h>

int main(){
	int roll[10],i=0,j=0;
	for(i=0;i<10;i++){
		printf("Enter A Roll No -");
		scanf("%d",&roll[i]);
	}
	printf("\n\n\n----------Roll No is----------\n\n\n");
	for(i=0;i<10;i++){
		printf("\nRoll No is - %d",roll[i]);
	}
}
