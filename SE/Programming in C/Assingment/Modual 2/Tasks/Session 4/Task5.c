#include <stdio.h>

int main()
{
    int followerCount = 100;

    printf("%d\n", followerCount++);
    printf("%d\n", followerCount);

    printf("%d\n", ++followerCount);
    printf("%d\n", followerCount);

    return 0;
}