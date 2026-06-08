#include <stdio.h>

void reverseString(char str[])
{
    int len = 0, i=0;

    // Find length manually
    while(str[i] != '\0')
    {
        len++;
        i++;
    }

    printf("Reversed String: ");

    // Print in reverse order
    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);
}