#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, count = 1;

    printf("Enter a string: ");
    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    printf("Number of words: %d", count);
}