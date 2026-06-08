 #include<stdio.h>
 
 int main(){
 	int arr[2][2],i,j;
 	
 	for(i=0;i<2;i++){
 		for(j=0;j<2;j++){
 			printf("Enter Number for Array- ");
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nArray Numbers\n");
	
 	for(i=0;i<2;i++){
 		for(j=0;j<2;j++){
 			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	
 }
