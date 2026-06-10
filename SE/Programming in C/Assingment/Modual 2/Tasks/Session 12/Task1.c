#include <stdio.h>
#include <string.h>

struct Playlist
{
    char title[100];
    char artist[100];
    int durationSeconds;
};

int main()
{

    struct Playlist myFavoriteSong = {
        "Bohemian Rhapsody",
        "Queen",
        355};

    printf("--- My Favorite Song ---\n");
    printf("Title:    %s\n", myFavoriteSong.title);
    printf("Artist:   %s\n", myFavoriteSong.artist);
    printf("Duration: %d seconds\n", myFavoriteSong.durationSeconds);

    return 0;
}