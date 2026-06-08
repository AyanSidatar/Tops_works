#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], search[100];
    FILE *fp;

    fp = fopen("FirstFile.txt", "r");
    printf("\n Enter conntent to be searched: ");
    fgets(search, sizeof(search), stdin);

    while (fgets(str, 100, fp) != NULL)
    {
        if (strcmp(str, search) == 0)
        {
            printf("\n The content %s is found in the file.", search);
            break;
        }
    }

    fclose(fp);
}