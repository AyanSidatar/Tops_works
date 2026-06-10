#include <stdio.h>

int isEligibleForOffer(int age, float orderValue)
{
    if (age >= 18 && orderValue > 500)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", isEligibleForOffer(20, 600));
    printf("%d\n", isEligibleForOffer(16, 600));
    printf("%d\n", isEligibleForOffer(20, 400));
    return 0;
}