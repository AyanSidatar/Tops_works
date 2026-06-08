#include<stdio.h>

int main(){
	int Age,Weight;
	
	printf("Enter Your Age:-");
	scanf("%d",&Age);
	
	if(Age>=18){
		printf("Enter Your Weight:-");
		scanf("%d",&Weight);
		if(Weight>=55){
			printf("You can Donate A Blood");
		}
		else printf("Due to Weight You can't Donate");
	}
	else printf("Due to Age  You can't Donate");
}
