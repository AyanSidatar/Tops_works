 #include<stdio.h>
 
  int main(){
  	int i,j,n,k=1;
  	
  	printf("enter number for pattern -");
  	scanf("%d",&n);
  	
  	for(i=1;i<=n;i++){
  		for(j=1;j<=i;j++){
  			printf(" %d",k);
  			k+=2;
		}	
		printf("\n");
	}
  }
