#include <stdio.h>

int main()
{

    FILE *file = fopen("playlist.txt", "a");

    if (file == NULL)
    {
        printf("Error opening file for appending!\n");
        return 1;
    }

    fprintf(file, "Crazy Little Thing Called Love\n");
    fprintf(file, "Shape of You\n");

    fclose(file);

    printf("Two more songs appended successfully to playlist.txt.\n");
    return 0;
}