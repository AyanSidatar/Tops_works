#include <stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playlist1 = 35;
    int playlist2 = 58;

    printf("=== Before Swap ===\n");
    printf("Playlist 1 : %d songs\n", playlist1);
    printf("Playlist 2 : %d songs\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\n=== After Swap ===\n");
    printf("Playlist 1 : %d songs\n", playlist1);
    printf("Playlist 2 : %d songs\n", playlist2);
    return 0;
}