#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Part 1: Writing data to the wishlist file
    ofstream outFile("wishlist.txt");
    if (!outFile)
    {
        cout << "❌ Error opening wishlist file!\n";
        return 1;
    }

    cout << "=== Flipkart Wishlist Entry ===\n";
    for (int i = 1; i <= 3; i++)
    {
        string productName;
        double price;

        cout << "\nEnter product #" << i << " name: ";
        getline(cin >> ws, productName); // 'ws' clears any leading whitespace/newlines
        cout << "Enter price for " << productName << ": ₹";
        cin >> price;

        // Save to file separating name and price by a newline or custom delimiter
        outFile << productName << "\n"
                << price << "\n";
    }
    outFile.close();
    cout << "\n💾 Wishlist saved to 'wishlist.txt'.\n\n";

    // Part 2: Reading data back out from the file
    ifstream inFile("wishlist.txt");
    if (!inFile)
    {
        cout << "❌ Error reading wishlist file!\n";
        return 1;
    }

    cout << "=== Your Flipkart Wishlist Dashboard ===\n";
    string name;
    double price;

    // Read the product name line, then the price line right below it
    while (getline(inFile, name) && inFile >> price)
    {
        inFile.ignore(); // Clean up the remaining newline character after reading the double
        cout << "🛍️ " << name << " | Price: ₹" << price << "\n";
    }
    inFile.close();

    return 0;
}