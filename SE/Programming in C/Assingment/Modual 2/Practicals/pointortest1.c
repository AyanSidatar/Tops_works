#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int i;
    ptr = (float *)malloc(5 * sizeof(float));

    for (i = 0; i < 5; i++)
    {
        ptr[i] = rand() + i;
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n\n%f", ptr[i]);
    }
}