#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[100];
    char username[10];
    int nameLen;

    printf("Enter your full name: ");
    scanf("%s", fullName);

    nameLen = strlen(fullName);

    if (nameLen <= 5)
    {

        strcpy(username, fullName);
        printf("\nName is shorter than 5 chars.\n");
    }
    else
    {

        strncpy(username, fullName, 5);
        username[5] = '\0';
        printf("\nFirst 5 characters used.\n");
    }

    printf("Full Name : %s\n", fullName);
    printf("Username  : %s\n", username);
    return 0;
}