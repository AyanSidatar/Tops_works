#include<stdio.h>
int main()
{
    // int num,digits,sum=0,i=1;

    // printf("Enter a number: ");
    // scanf("%d",&num);

    // for(i=1;i<=num;i++)
    // {
    //     digits = num % 10;
    //     sum = sum + digits;
    //     num = num / 10;
    // }
    // printf("Sum Of Digits: %d",sum);


//Challange

    int num,digits,reverse=0;
    printf("Enter number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        digits = num % 10;
        reverse = reverse * 10 + digits;
        num = num/ 10;
    }
    printf("Reverse Nuber is %d: ",reverse);
}