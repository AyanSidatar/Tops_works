#include <stdio.h>

int factorial(int n)
{
    int fect = 1, i;
    for (i = 1; i <= n; i++)
    {
        fect = fect * i;
    }
    return fect;
}

int main()
{
    int n, i, j = 2;
    float ans = 0.0;

    printf("enter number - ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        ans += (float)i / factorial(j);
        j += 2;
    }
    printf("%f", ans);
}