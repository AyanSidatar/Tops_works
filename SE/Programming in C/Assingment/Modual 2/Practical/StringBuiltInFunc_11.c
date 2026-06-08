#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);
    printf("Length of String: %d", strlen(str1));
}