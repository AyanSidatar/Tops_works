#include<stdio.h>
int main()
{
    // int n,i,j;

    // printf("Enter a matrix size: ");
    // scanf("%d",&n);

    // int fmatrix[n][n],smatrix[n][n],tmatrix[n][n];

    // printf("Enter a first matrix element: \n");

    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         scanf("%d",&fmatrix[i][j]);
    //     }
    // }

    // printf("\nEnter a second matrix element: \n");

    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         scanf("%d",&smatrix[i][j]);
    //     }
    // }

    // printf("....First Matrix....\n");
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         printf("%d\t",fmatrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("....Second Matrix....\n");
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         printf("%d\t",smatrix[i][j]);
    //     }
    //     printf("\n");
    // }


    // printf("\n Sum Of Two Matrix\n");
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         tmatrix[i][j] = fmatrix[i][j] * smatrix[i][j];
    //     }
    // }
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         printf("%d\t",tmatrix[i][j]);
    //     }
    //     printf("\n");
    // }


    //challange


    int n,i,j;

    printf("Enter a matrix size: ");
    scanf("%d",&n);

    int fmatrix[n][n],smatrix[n][n],tmatrix[n][n];

    printf("Enter a first matrix element: \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&fmatrix[i][j]);
        }
    }

    printf("\nEnter a second matrix element: \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&smatrix[i][j]);
        }
    }

    printf("....First Matrix....\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",fmatrix[i][j]);
        }
        printf("\n");
    }

    printf("....Second Matrix....\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",smatrix[i][j]);
        }
        printf("\n");
    }


    printf("\nMultiplication Of Two Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            tmatrix[i][j]=0;

            for(int k=0;k<n;k++)
            {
                tmatrix[i][j] = tmatrix[i][j] + fmatrix[i][k] * smatrix[k][j];
            } 
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",tmatrix[i][j]);
        }
        printf("\n");
    }
}
