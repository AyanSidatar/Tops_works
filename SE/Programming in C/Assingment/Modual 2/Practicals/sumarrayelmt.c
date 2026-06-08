 #include<stdio.h>

int main(){
	int num[5],i=0,sum=0;
	for(i=0;i<5;i++){
		printf("Enter A Roll No -");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5;i++){
		sum+=num[i];
	}
	printf("%d",sum);
}
