#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(followers + i) += 100;
    }
}

int main()
{
    int followers[5] = {1200, 4500, 890, 3100, 670};
    char friends[5][20] = {"Rahul", "Priya", "Aman", "Sneha", "Ravi"};
    int i;

    printf("=== Before incrementing ===\n");
    for (i = 0; i < 5; i++)
    {
        printf("%-8s : %d followers\n", friends[i], followers[i]);
    }

    incrementFollowers(followers, 5);

    printf("\n=== After +100 followers ===\n");
    for (i = 0; i < 5; i++)
    {
        printf("%-8s : %d followers\n", friends[i], followers[i]);
    }
    return 0;
}