#include <stdio.h>

int main()
{
    // int arr[10];
    // int i, max, min;
    // for (i = 0; i < 10; i++)
    // {
    //     printf("Enter 10 Number: ");
    //     scanf("%d", &arr[i]);
    // }

    // max = arr[0];
    // min = arr[0];
    // for (i = 1; i < 10; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }

    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // printf("Maximum Value : %d\n", max);
    // printf("Minimum Value : %d\n", min);


    //Challange


    int arr[10],i,j,temp,num;

    printf("Enter total number: ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("Enter 10 munber to sort: ");
        scanf("%d",&arr[i]);
    }

    // Sorting array element

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\n\nAfter Sort Array elment\n\n");
    for(i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }

}
