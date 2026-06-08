#include<stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    // Create and Write File
    fp = fopen("Data.txt", "w");

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);
    fclose(fp);

    // Open and Read File
    fp = fopen("Data.txt", "r");

    fgets(str, sizeof(str), fp);

    printf("\nFile Content: %s", str);

    fclose(fp);
}