#include<stdio.h>
int main()
{
    int i;

    // While Loop
    printf("Using While Loop:\n");
    i = 1;
    while(i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    // For Loop
    printf("\n\nUsing For Loop:\n");

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    // Do-While Loop
    printf("\n\nUsing Do-While Loop:\n");

    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    }
    while(i <= 10);
}