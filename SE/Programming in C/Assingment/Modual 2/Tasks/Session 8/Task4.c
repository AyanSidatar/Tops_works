#include <stdio.h>

void increaseFollowersByValue(int followers)
{
    followers += 1000;
    printf("Inside ByValue:     %d\n", followers);
}

void increaseFollowersByReference(int *followers)
{
    *followers += 1000;
    printf("Inside ByReference: %d\n", *followers);
}

int main()
{
    int followers = 5000;

    printf("Original: %d\n\n", followers);

    increaseFollowersByValue(followers);
    printf("After ByValue:     %d\n\n", followers);

    increaseFollowersByReference(&followers);
    printf("After ByReference: %d\n", followers);
    return 0;
}