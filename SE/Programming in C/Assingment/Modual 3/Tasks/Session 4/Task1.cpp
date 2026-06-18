#include <iostream>
#include <string>

using namespace std;

// Base Class
class SocialMediaUser
{
public:
    string username;
    int followers;

    // Constructor to initialize properties
    SocialMediaUser(string user, int count)
    {
        username = user;
        followers = count;
    }

    void displayProfile()
    {
        cout << "\n👤 Username: @" << username << "\n";
        cout << "👥 Followers: " << followers << "\n";
    }
};

int main()
{
    // Instantiate and test base class
    SocialMediaUser user1("alpha_creator", 15000);
    user1.displayProfile();

    return 0;
}