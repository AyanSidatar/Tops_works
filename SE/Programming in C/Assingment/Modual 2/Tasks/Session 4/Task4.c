#include <stdio.h>

int main()
{
    int likes = 1200, comments = 180, shares = 60;

    int isTrending = (likes >= 1000) || (comments > 200 && shares >= 50);

    if (isTrending)
    {
        printf("Post is TRENDING!\n");
    }
    else
    {
        printf("Post is NOT trending.\n");
    }

    return 0;
}