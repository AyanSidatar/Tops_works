#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file = fopen("playlist.txt", "r");
    char originalSong[100];
    char tempLower[100];

    if (file == NULL)
    {
        printf("Error opening playlist.txt!\n");
        return 1;
    }

    printf("--- Songs containing the word 'love' (Case-Insensitive) ---\n");

    while (fgets(originalSong, sizeof(originalSong), file) != NULL)
    {

        int i = 0;
        while (originalSong[i] != '\0')
        {
            tempLower[i] = tolower((unsigned char)originalSong[i]);
            i++;
        }
        tempLower[i] = '\0';

        if (strstr(tempLower, "love") != NULL)
        {

            printf("%s", originalSong);
        }
    }

    fclose(file);
    return 0;
}