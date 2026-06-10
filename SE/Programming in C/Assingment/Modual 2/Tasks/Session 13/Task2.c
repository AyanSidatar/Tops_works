#include <stdio.h>

int main()
{
    FILE *file = fopen("playlist.txt", "r");
    char song[100];

    if (file == NULL)
    {
        printf("Error: Could not open playlist.txt. Make sure it exists!\n");
        return 1;
    }

    printf("--- Current Playlist ---\n");

    while (fgets(song, sizeof(song), file) != NULL)
    {

        printf("%s", song);
    }

    fclose(file);
    return 0;
}