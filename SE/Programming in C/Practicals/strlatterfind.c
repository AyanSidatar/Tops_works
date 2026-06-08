#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], latter;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &latter);

    int found = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == latter)
        {
            printf("Character '%c' found at index %d\n", latter, i);
            found = 1;
        }
    }
    if (!found)
    {
        printf("Character '%c' not found in the string.\n", latter);
    }
}