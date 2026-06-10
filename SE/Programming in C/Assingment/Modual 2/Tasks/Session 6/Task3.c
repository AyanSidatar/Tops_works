#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char songs[3][50] = {"Kesariya", "Believer", "Blinding Lights"};

    srand(time(0));
    int index = rand() % 3;

    char guess[50];

    printf("=== Guess the Spotify Song ===\n");
    printf("Hint: It's one of your top 3 songs!\n\n");

    do
    {
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[index]) == 0)
        {
            printf("Correct! The song was '%s'\n", songs[index]);
        }
        else
        {
            printf("Wrong! Try again...\n");
        }
    } while (strcmp(guess, songs[index]) != 0);

    return 0;
}