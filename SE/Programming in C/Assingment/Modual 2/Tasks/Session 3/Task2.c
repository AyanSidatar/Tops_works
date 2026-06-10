#include <stdio.h>
int main()
{
    char playlist[] = "Bollywood Hits";
    int totalSongs = 42;
    float avgDuration = 3.5;

    printf("Playlist '%s' has %d songs with an average duration of %.1f minutes.\n",
           playlist, totalSongs, avgDuration);
    return 0;
}