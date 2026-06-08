#include<stdio.h>
int main()
{
    int arr[5], i;
    int matrix[3][3], j;
    int sum = 0;

    // One-Dimensional Array
    printf("Enter 5 Integer Numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements of 1D Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Two-Dimensional Array
    printf("\n\nEnter Elements for 3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix Elements:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);

            sum = sum + matrix[i][j];
        }
        printf("\n");
    }
    printf("\nSum of All Matrix Elements = %d", sum);
}