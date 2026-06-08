#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    
    printf("Enter a number Of array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        avg = (float)sum/n;
    }
    printf("Sum Of N number: %d\n",sum);
    printf("Avarage: %f\n",avg);
}