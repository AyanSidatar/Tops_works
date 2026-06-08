#include <stdio.h>

int main()
{
    int n = 10, *ptr_var;

    ptr_var = &n;
    printf("%d\n\n", n);
    printf("Address %p", &n);
    printf("\n\nValue of ptr_var %p\n\n", ptr_var);
}