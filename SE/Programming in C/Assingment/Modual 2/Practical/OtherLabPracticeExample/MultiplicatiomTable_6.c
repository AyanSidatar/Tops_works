#include <stdio.h>

int main()
{
    // int num,i;
    // printf("Enter Number: ");
    // scanf("%d",&num);

    // printf("Multiplication Table of %d:\n", num);

    // for(i=1;i<=10;i++)
    // {
    //     printf("%d * %d = %d\n",num,i,num*i);
    // }


//Challange

    int num,range,i;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Enter Number of Range: ");
    scanf("%d",&range);

    printf("Multiplication Table of %d:\n", num);

    for(i=1;i<=range;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}