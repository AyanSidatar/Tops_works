#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
    string productName;
    double price;
    double rating;

    // Parameterized Constructor
    Product(string name, double p, double r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    // Method to display information
    void displayInfo()
    {
        cout << "\n--- Flipkart Product Details ---\n";
        cout << "Product Name: " << productName << "\n";
        cout << "Price: ₹" << price << "\n";
        cout << "Rating: " << rating << " / 5 ⭐\n";
        cout << "--------------------------------\n";
    }
};

int main()
{
    // Instantiating the product object with data arguments
    Product phone("Vivo V25 Pro", 35999.0, 4.5);

    // Displaying the details
    phone.displayInfo();

    return 0;
}