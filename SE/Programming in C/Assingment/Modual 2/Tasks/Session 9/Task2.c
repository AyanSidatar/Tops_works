#include <stdio.h>

int main()
{
    int dailySteps[7] = {4500, 7200, 6800, 9100, 5300, 8400, 3200};
    char days[7][10] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    printf("=== Daily Step Count ===\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s : %d steps\n", days[i], dailySteps[i]);
    }
    return 0;
}