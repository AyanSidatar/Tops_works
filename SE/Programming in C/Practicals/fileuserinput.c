#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fp;

    fp = fopen("FirstFile.txt", "a");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    fprintf(fp, "Hello, First File!\n");
    fclose(fp);
}