#include <stdio.h>

float calculateAverage(int orders[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += orders[i];
    }
    return (float)sum / size;
}

int main()
{
    int dailyOrders[7] = {120, 250, 180, 340, 90, 420, 210};
    char days[7][10] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    printf("=== Zomato Daily Orders ===\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s : Rs.%d\n", days[i], dailyOrders[i]);
    }

    float avg = calculateAverage(dailyOrders, 7);
    printf("\nAverage Weekly Spend: Rs.%.2f\n", avg);
    return 0;
}