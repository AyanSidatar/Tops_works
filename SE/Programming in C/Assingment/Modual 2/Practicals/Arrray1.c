 #include<stdio.h>

int main(){
	int roll[10],i=0,j=0;
	
	for(i=0;i<10;i++){
		roll[i]=j+=100;
	}
	for(i=0;i<10;i++){
		printf("\n%d",roll[i]);
	}  
}
