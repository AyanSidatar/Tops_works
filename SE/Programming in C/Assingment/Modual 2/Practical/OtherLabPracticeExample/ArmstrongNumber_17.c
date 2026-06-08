#include <stdio.h>

int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if(sum == temp)

    {
        printf("%d is an Armstrong Number.", temp);
    }
       
    else
    {
        printf("%d is Not an Armstrong Number.", temp);
    }    
}

//chalange

#include <stdio.h>

int main()
{
    int num, temp, rem, sum;

    printf("Enter Numbers between 1 and 1000:\n");

    for(num = 1; num <= 1000; num++)
    {
        temp = num;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d\t", num);
        }
    }
}