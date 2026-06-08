#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int randomNum, guess, attempts = 5, i;

    srand(time(0));
    randomNum = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");
    printf("You have %d attempts.\n", attempts);

    for(i = 1; i <= attempts; i++)
    {
        printf("\nAttempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if(guess == randomNum)
        {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        }
        else if(guess < randomNum)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("Too High! Try Again.\n");
        }
    }

    if(i > attempts)
    {
        printf("\nGame Over!\n");
        printf("The correct number was %d\n", randomNum);
    }
}