#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a Prime Number.", num);
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d is a Prime Number.", num);
        }
        else
        {
            printf("%d is not a Prime Number.", num);
        }
    }
}


//challange

// #include <stdio.h>

// int main()
// {
//     int n, i, j, flag;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Prime Numbers between 1 and %d are:\n", n);

//     for (i = 2; i <= n; i++)
//     {
//         flag = 0;

//         for (j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             printf("%d ", i);
//         }
//     }
// }