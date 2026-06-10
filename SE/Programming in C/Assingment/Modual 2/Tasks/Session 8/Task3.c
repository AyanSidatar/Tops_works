#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getUserInitials(char fullName[], char initials[])
{
    int k = 0;

    initials[k++] = toupper(fullName[0]);

    for (int i = 0; fullName[i] != '\0'; i++)
    {
        if (fullName[i] == ' ' && fullName[i + 1] != '\0')
        {
            initials[k++] = toupper(fullName[i + 1]);
        }
    }
    initials[k] = '\0';
}

int main()
{
    char name[] = "Virat Kohli";
    char initials[10];

    getUserInitials(name, initials);
    printf("Initials of '%s' = %s\n", name, initials);
    return 0;
}