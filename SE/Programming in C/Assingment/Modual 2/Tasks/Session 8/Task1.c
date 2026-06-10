#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *count, char product[])
{

    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart:\n");
    for (int i = 0; i < *count; i++)
    {
        printf("  %d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][50] = {"Shoes", "Watch"};
    int count = 2;

    addToCart(cart, &count, "Headphones");
    addToCart(cart, &count, "Laptop Bag");

    printf("\nFinal cart size outside function: %d items\n", count);
    return 0;
}