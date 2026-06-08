#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;   // Pointer stores address of num

    *ptr = 20;    // Modify value using pointer

    printf("Modified Value of num = %d", num);
}