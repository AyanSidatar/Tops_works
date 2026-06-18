#include <iostream>
#include <string>

class FoodOrder
{
public:
    int orderId;
    std::string restaurantName;
    bool isDelivered;

    // Constructor
    FoodOrder(int id, std::string restaurant, bool delivered)
    {
        orderId = id;
        restaurantName = restaurant;
        isDelivered = delivered;
    }

    // Member function to update delivery status
    void markDelivered()
    {
        isDelivered = true;
        std::cout << "Order #" << orderId << " from " << restaurantName << " has been successfully delivered!\n";
    }
};

int main()
{
    // Instantiate FoodOrder (initially not delivered)
    FoodOrder order1(1042, "Pizza Palace", false);

    // Call markDelivered
    order1.markDelivered();

    return 0;
}