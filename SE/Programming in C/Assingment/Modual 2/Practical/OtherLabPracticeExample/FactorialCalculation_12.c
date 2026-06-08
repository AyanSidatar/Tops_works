// #include<stdio.h>
// int factorial(int n)
// {
//     int fact=1,i=0;
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
    
//     return fact;
// }
// int main()
// {
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);

//     printf("Factorial Is: %d",factorial(num));
// }


//challange recursive find factorial


#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));
}