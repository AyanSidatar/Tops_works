#include <iostream>

using namespace std;

class Ticket
{
public:
    // Constructor
    Ticket()
    {
        cout << "🎟️ Ticket created successfully inside memory.\n";
    }

    // Destructor
    ~Ticket()
    {
        cout << "💾 Saving your ticket... Destructor lifecycle complete.\n";
    }
};

int main()
{
    cout << "--- Program Start ---\n";

    // Creating a local scope block using curly braces
    {
        Ticket myTicket;
        cout << "Processing active booking details...\n";
    } // <-- myTicket goes out of scope here and is destroyed automatically!

    cout << "--- Program End ---\n";
    return 0;
}