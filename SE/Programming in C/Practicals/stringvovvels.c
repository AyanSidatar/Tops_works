#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter Your Name: ");
    scanf("%s", name);
    int vovelCount = 0;
    int lattersCount = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        lattersCount++;
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            vovelCount++;
        }
    }
    printf("Total Vowels: %d", vovelCount);
    printf("\nTotal Latters Or Characters: %d", lattersCount);
}