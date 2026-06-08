#include <stdio.h>
int main()
{
    int num;

    printf("Enter Number Of row and column: ");
    scanf("%d", &num);

    int matrix[num][num], i, j;
    int sum = 0;

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("Enter Number: ");
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("..............Matrix Is.............\n");

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("\t%d", matrix[i][j]);

            sum = sum + matrix[i][j];
        }
        printf("\n");
    }
    printf("\nSum of All Matrix Elements = %d", sum);
}