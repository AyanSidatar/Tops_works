#include <iostream>
#include <string>

using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    SocialMediaUser(string user, int count)
    {
        username = user;
        followers = count;
    }
};

// Derived Class inheriting from SocialMediaUser
class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    // Constructor passing arguments to the parent constructor
    YouTuber(string user, int count, string channel) : SocialMediaUser(user, count)
    {
        channelName = channel;
    }

    void uploadVideo(string title)
    {
        cout << "🎥 Video '" << title << "' uploaded to channel: [" << channelName << "]\n";
    }
};

int main()
{
    YouTuber ytUser("tech_guru", 85000, "Guru Tech Reviews");

    // Accessing inherited property
    cout << "Account Creator: @" << ytUser.username << "\n";

    // Calling derived class method
    ytUser.uploadVideo("Top 5 Smartphones in 2026");

    return 0;
}