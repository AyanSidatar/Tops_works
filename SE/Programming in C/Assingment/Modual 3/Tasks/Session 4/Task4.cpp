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

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    YouTuber(string user, int count, string channel) : SocialMediaUser(user, count)
    {
        channelName = channel;
    }
};

// Grandchild Class inheriting from YouTuber
class GamingYouTuber : public YouTuber
{
public:
    // Constructor passes parameters down the structural chain
    GamingYouTuber(string user, int count, string channel) : YouTuber(user, count, channel) {}

    void streamGame(string gameName)
    {
        // Accesses 'username' from grandparent and 'channelName' from parent
        cout << "🎮 @" << username << " is now streaming [" << gameName << "] live on [" << channelName << "]!\n";
    }
};

int main()
{
    // Instantiating grandchild object
    GamingYouTuber gamer("ninja_pro", 500000, "Ninja Gaming Hub");

    // Triggering the multilevel method
    gamer.streamGame("Free Fire");

    return 0;
}