#include <stdio.h>

int main()
{
    int orders[5] = {120, 340, 85, 210, 175};
    int *ptr = orders;
    int i;

    printf("%-8s %-12s %-15s\n", "Order", "Amount(Rs)", "Memory Address");
    printf("----------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("Order %-2d  Rs.%-8d  %p\n", i + 1, *ptr, ptr);
        ptr++;
    }
    return 0;
}