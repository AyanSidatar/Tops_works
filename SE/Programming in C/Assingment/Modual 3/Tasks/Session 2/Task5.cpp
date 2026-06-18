#include <iostream>
#include <string>

// Struct representing the parameter object configuration
struct FoodOrderConfig
{
    int orderId;
    std::string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    std::string restaurantName;
    bool isDelivered;

    // Refactored constructor taking the configuration struct as a single parameter
    FoodOrder(FoodOrderConfig config)
    {
        orderId = config.orderId;
        restaurantName = config.restaurantName;
        isDelivered = config.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;
        std::cout << "Order #" << orderId << " from " << restaurantName << " has been successfully delivered!\n";
    }
};

int main()
{
    // Instantiating code using the new constructor signature with designated initializers
    FoodOrder order1(FoodOrderConfig{
        .orderId = 2055,
        .restaurantName = "Burger Joint",
        .isDelivered = false});

    // Call markDelivered
    order1.markDelivered();

    return 0;
}