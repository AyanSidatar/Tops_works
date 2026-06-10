#include <stdio.h>
#include <string.h>

int main()
{
    char teams[10][50] = {"Mumbai Indians", "Chennai Super Kings", "RCB"};
    int count = 3;
    int choice;

    while (1)
    {
        printf("\n--- IPL Menu ---\n");
        printf("1. View Teams\n2. Add Team\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nYour IPL Teams:\n");
            for (int i = 0; i < count; i++)
            {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if (choice == 2)
        {
            printf("Enter new team name: ");
            scanf("%s", teams[count]);
            count++;
            printf("Team added!\n");
        }
        else if (choice == 3)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}