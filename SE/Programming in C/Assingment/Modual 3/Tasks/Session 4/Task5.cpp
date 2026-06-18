#include <iostream>
#include <string>

using namespace std;

// Base Parent Class
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

// Branch 1
class YouTuber : public SocialMediaUser
{
public:
    string channelName;
    YouTuber(string user, int count, string channel) : SocialMediaUser(user, count) { channelName = channel; }
};

// Branch 2
class Podcaster : public SocialMediaUser
{
public:
    string podcastName;
    Podcaster(string user, int count, string podName) : SocialMediaUser(user, count) { podcastName = podName; }
};

// Branch 3: Hierarchical Class Expansion
class InstagramInfluencer : public SocialMediaUser
{
public:
    InstagramInfluencer(string user, int count) : SocialMediaUser(user, count) {}

    void postStory(string storyTitle)
    {
        cout << "📸 @" << username << " posted a new story: [" << storyTitle << "]\n";
    }
};

int main()
{
    cout << "=== Hierarchical Inheritance Demonstration ===\n\n";

    // Show individual distinct components using the shared ancestral base traits
    YouTuber yt("tech_guy", 10000, "Tech Center");
    Podcaster pod("talks_pro", 4500, "Pro Talk");
    InstagramInfluencer insta("lifestyle_travels", 125000);
    insta.postStory("A Beautiful Rainy Morning Vlog 🌧️");
    cout << "Total IG Audience reach: " << insta.followers << " followers.\n";

    return 0;
}