#include <stdio.h>
#include <string.h>

int main()
{
    char mealTime[20];
    printf("Enter meal time (breakfast/lunch/dinner/snack): ");
    scanf("%s", mealTime);

    if (strcmp(mealTime, "breakfast") == 0)
    {
        printf("Try Masala Dosa or Poha!\n");
    }
    else if (strcmp(mealTime, "lunch") == 0)
    {
        printf("How about Dal Makhani with Rice?\n");
    }
    else if (strcmp(mealTime, "dinner") == 0)
    {
        printf("Try Butter Paneer with Naan!\n");
    }
    else if (strcmp(mealTime, "snack") == 0)
    {
        printf("Samosa or Vada Pav?\n");
    }
    else
    {
        printf("Try some fruits!\n");
    }
    return 0;
}