#include <stdio.h>

int main()
{
    int likes = 4500;
    int *ptrLikes = &likes;

    printf("Value of likes         : %d\n", likes);
    printf("Value via ptrLikes     : %d\n", *ptrLikes);
    printf("Address of likes       : %p\n", &likes);
    printf("Address stored in ptr  : %p\n", ptrLikes);
    return 0;
}