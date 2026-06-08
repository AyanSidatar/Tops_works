#include <stdio.h>

int main()
{
    int size, arr[size], max, n, i;
    printf("Enter Number -");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter Number -");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("\nNumber is %d", arr[i]);
    }

    max = arr[0];

    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMaximum Number is %d", max);
}
cd "c:\Users\ASUS\OneDrive\Documents\SE\Programming in C\Practicals\" ; if ($?) { gcc fileread.c -oHello, First File!
