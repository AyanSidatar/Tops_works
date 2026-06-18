#include <iostream>
#include <string>

using namespace std;

class UserProfile
{
private:
    string phoneNumber; // Marked private to stop direct external manipulation

public:
    // Public Setter with data formatting check
    void setPhoneNumber(string num)
    {
        if (num.length() >= 10)
        {
            phoneNumber = num;
            cout << "✅ Phone number validation passed and committed.\n";
        }
        else
        {
            cout << "❌ Error: Invalid phone number format.\n";
        }
    }

    // Public Getter
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile user;

    // Direct access line like 'user.phoneNumber = "123";' will now trigger a compile-time crash.
    // Instead, we use the secure interface functions:
    user.setPhoneNumber("9876543210");
    cout << "User Registered Contact: " << user.getPhoneNumber() << "\n";

    return 0;
}