#include <stdio.h>

int main()
{
    int x = 0;

        while (x > 5)
    {
        printf("This will never print!\n");
    }
    printf("While loop skipped entirely.\n");
    return 0;
}