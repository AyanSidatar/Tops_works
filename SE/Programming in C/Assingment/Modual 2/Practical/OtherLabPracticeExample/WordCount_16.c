#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, words = 1;
    int len = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            words++;

            if(len > maxLen)
            {
                maxLen = len;
            }

            len = 0;
        }
        else
        {
            len++;
        }
        i++;
    }
    if(len > maxLen)
    {
        maxLen = len;
    }
    else
    {
        maxLen = maxLen;
    }

    printf("Total Words = %d\n", words);
    printf("Length of Longest Word = %d\n", maxLen);
}