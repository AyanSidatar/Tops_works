#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Flipkart";
    char shoppingApp[20];

    strcpy(shoppingApp, source);

    printf("Source String      : %s\n", source);
    printf("Copied String      : %s\n", shoppingApp);
    printf("Are they same?     : %s\n",
           strcmp(source, shoppingApp) == 0 ? "Yes" : "No");
    return 0;
}