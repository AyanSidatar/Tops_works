#include <stdio.h>

float calculateInterest(int p, int r, int t)
{
    float ans = (p * r * t) / 100;
    return ans;
}
int main()
{
    int p, r, t;

    printf("Enter PrincipalAmount -");
    scanf("%d", &p);
    printf("Enter Rate of Interest -");
    scanf("%d", &r);
    printf("Enter Years -");
    scanf("%d", &t);

    float si = calculateInterest(p, r, t);
    printf("Simple Interest is %f", si);
}