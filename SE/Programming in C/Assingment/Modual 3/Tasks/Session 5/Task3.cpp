#include <iostream>
#include <string>

using namespace std;

class FlipkartSearch
{
public:
    // Search by product name only
    void searchProduct(string productName)
    {
        cout << "🔍 Searching global catalog for keyword matches: \"" << productName << "\"\n";
        cout << "-> Displaying all matching listings across all categories.\n\n";
    }

    // Search by product name AND category filter
    void searchProduct(string productName, string category)
    {
        cout << "🔍 Searching filtered catalog for: \"" << productName << "\"\n";
        cout << "📂 Target Department: [" << category << "]\n";
        cout << "-> Displaying highly relevant matches restricted strictly to " << category << ".\n\n";
    }
};

int main()
{
    FlipkartSearch engine;

    // Case A: Broad global search
    engine.searchProduct("MacBook Pro");

    // Case B: Niche filtered search
    engine.searchProduct("MacBook Pro", "Electronics");

    return 0;
}