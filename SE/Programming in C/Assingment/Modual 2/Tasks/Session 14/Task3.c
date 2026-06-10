#include <stdio.h>

void formatFollowersCount(long count, char *result)
{
    if (count >= 1000000)
    {
        sprintf(result, "%.1fM", count / 1000000.0);
    }
    else if (count >= 1000)
    {
        sprintf(result, "%.1fK", count / 1000.0);
    }
    else
    {
        sprintf(result, "%ld", count);
    }
}

int main()
{
    char output[50];

    formatFollowersCount(842, output);
    printf("Followers: %s\n", output);

    formatFollowersCount(1500, output);
    printf("Followers: %s\n", output);

    formatFollowersCount(1200000, output);
    printf("Followers: %s\n", output);
    return 0;
}