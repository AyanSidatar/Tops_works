#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rstr[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strcpy(rstr, strrev(str));
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] == rstr[i])
        {
            printf("The string is a palindrome.\n");
            break;
        }
        else
        {
            printf("The string is not a palindrome.\n");
            break;
        }
    }
}