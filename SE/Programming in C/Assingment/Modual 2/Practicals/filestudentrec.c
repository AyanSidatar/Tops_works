#include <stdio.h>
#include <string.h>

int main()
{
    char SR[100];
    FILE *fp;

    fp = fopen("StudentRecord.txt", "a");

    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter Student Record: ");
        fgets(SR, sizeof(SR), stdin);
        fputs(SR, fp);
    }
}