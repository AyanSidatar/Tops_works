#include<stdio.h>

int main()
{
    int i;

    // Break Statement Example
    printf("Using Break Statement:\n");
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }
        printf("%d ", i);
    }

    // Continue Statement Example
    printf("\n\nUsing Continue Statement:\n");
    for(i = 1; i <= 10; i++)
    {
        if(i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }
}