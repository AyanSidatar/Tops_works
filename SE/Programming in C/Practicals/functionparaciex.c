#include <stdio.h>

float compoundInterest(int principal, int rate, int time)
{
    float ans = principal * (1 + rate / 100) * time;
    return ans;
}
int main()
{
    int principal, rate, time;
    printf("Enter Principal Amount: ");
    scanf("%d", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%d", &rate);
    printf("Enter Time (in years): ");
    scanf("%d", &time);

    float ci = compoundInterest(principal, rate, time);
    printf("Compound Interest is %f", ci);
    return 0;
}