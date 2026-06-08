#include<stdio.h>
int main(){
    int oddCount=0, evenCount=0, n, rem;
    printf("Enter Number for Series - ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        if(rem%2==0){
            printf("\nEven No is %d",rem);
            evenCount++;
            printf("\t Even Count = %d",evenCount);
        }
        else{
            printf("\nOdd No is %d",rem);
            oddCount++;
            printf(" \t Odd Count = %d",oddCount);
        }
        n=n/10;
    }
    printf("\nTotal Even Digits = %d",evenCount);
    printf("\nTotal Odd  Digits = %d",oddCount);
    printf("\nTotal Digits = %d",oddCount+evenCount);
    return 0;
}
