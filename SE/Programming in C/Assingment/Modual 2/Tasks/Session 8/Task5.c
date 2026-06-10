#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeFirst(char input[], char output[])
{
    strcpy(output, input);
    if (output[0] != '\0')
    {
        output[0] = toupper(output[0]);
    }
}

int main()
{
    char result[100];

    capitalizeFirst("wireless earbuds", result);
    printf("Product  : %s\n", result);

    capitalizeFirst("rahul_dev", result);
    printf("Username : %s\n", result);

    capitalizeFirst("rohit sharma", result);
    printf("Cricketer: %s\n", result);

    return 0;
}