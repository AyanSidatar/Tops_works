#include <stdio.h>

int main()
{

    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5},
        {3, 4, 5, 2, 4},
        {5, 5, 4, 3, 2}};

    printf("=== All Playlist Ratings ===\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Playlist %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", playlistRatings[i][j]);
        }
        printf("\n");
    }

    printf("\n=== Ratings for Playlist 2 ===\n");
    for (int j = 0; j < 5; j++)
    {
        printf("Day %d: %d\n", j + 1, playlistRatings[1][j]);
    }
    return 0;
}