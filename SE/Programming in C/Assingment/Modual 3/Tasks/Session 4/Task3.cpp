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

// Another Derived Class inheriting from SocialMediaUser
class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    Podcaster(string user, int count, string podName) : SocialMediaUser(user, count)
    {
        podcastName = podName;
    }

    void publishEpisode(string episodeTitle)
    {
        cout << "🎙️ Episode '" << episodeTitle << "' published on: [" << podcastName << "]\n";
    }
};

int main()
{
    Podcaster podUser("mindset_daily", 3400, "The Daily Growth Podcast");

    cout << "Account Creator: @" << podUser.username << "\n";
    podUser.publishEpisode("How to Code for 2 Hours Daily Without Burnout");

    return 0;
}