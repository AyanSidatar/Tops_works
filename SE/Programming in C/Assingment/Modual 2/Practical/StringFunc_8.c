#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Concatenate strings
    strcat(str1, " "); // Add space between two strings
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    printf("Length of String: %d", strlen(str1));
}