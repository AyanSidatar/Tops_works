#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fp;

    fp = fopen("FirstFile.txt", "w");

    fputs("Hello, First File!", fp);
}