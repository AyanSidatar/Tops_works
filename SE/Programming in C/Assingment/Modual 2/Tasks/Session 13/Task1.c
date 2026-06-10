#include <stdio.h>

int main()
{
    FILE *file = fopen("playlist.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(file, "Bohemian Rhapsody\n");
    fprintf(file, "Love of My Life\n");
    fprintf(file, "Blinding Lights\n");

    fclose(file);

    printf("playlist.txt created and 3 songs written successfully.\n");
    return 0;
}