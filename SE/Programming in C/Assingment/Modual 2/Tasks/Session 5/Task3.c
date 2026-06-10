#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];
    printf("Enter your IPL team: ");
    fgets(team, sizeof(team), stdin);
    team[strcspn(team, "\n")] = 0;

    if (strcmp(team, "Mumbai Indians") == 0)
    {
        printf("Go Mumbai Indians!\n");
    }
    else if (strcmp(team, "Chennai Super Kings") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "Royal Challengers Bangalore") == 0)
    {
        printf("RCB all the way!\n");
    }
    else if (strcmp(team, "Kolkata Knight Riders") == 0)
    {
        printf("KKR crushes it!\n");
    }
    else if (strcmp(team, "Delhi Capitals") == 0)
    {
        printf("Delhi Capitals rising!\n");
    }
    else
    {
        printf("Team not found!\n");
    }
    return 0;
}