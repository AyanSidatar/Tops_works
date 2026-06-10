#include <stdio.h>

struct FoodItem
{
    char itemName[100];
    float price;
    float rating;
};

int main()
{

    struct FoodItem menuItems[3] = {
        {"Chicken Biryani", 280.50, 4.5},
        {"Paneer Butter Masala", 220.00, 4.2},
        {"Garlic Naan", 45.00, 4.7}};

    printf("--- Zomato Menu Items ---\n");
    printf("%-22s | %-8s | %-6s\n", "Item Name", "Price", "Rating");
    printf("---------------------------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%-22s | ₹%-7.2f | %.1f/5.0\n",
               menuItems[i].itemName,
               menuItems[i].price,
               menuItems[i].rating);
    }

    return 0;
}