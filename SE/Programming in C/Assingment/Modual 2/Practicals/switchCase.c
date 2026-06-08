#include<stdio.h>

int main(){
	int mark;
	
	printf("Enter Marks:-");
	scanf("%d",&mark);
	
	switch(mark){
		case 80 ... 100:
			printf("A Gread");
			break;
		case 70 ... 79:
			printf("B Gread");
			break;
		case 60 ... 69:
			printf("C Gread");
			break;
		case 50 ... 59:
			printf("D Gread");
			break;
		default:
			printf("Fail");
			break;
	}
}
