#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fp;

    fp = fopen("Array3.c", "r");

    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    // fprintf(fp, "%s", str);

    // fprintf(fp, "Hello, First File!\n");
    fclose(fp);
}