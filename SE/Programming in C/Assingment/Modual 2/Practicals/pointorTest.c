#include <stdio.h>

int test(int *num)
{
    *num = *num + 5;
    return *num;
}
int main()
{
    int n = 10;
    test(&n);
    printf("New Value is %d", n);
}