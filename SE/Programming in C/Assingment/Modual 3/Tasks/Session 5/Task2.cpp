#include <iostream>

using namespace std;

// Base Class
class SocialMediaUploader
{
public:
    // Virtual function enables runtime overriding
    virtual void uploadContent()
    {
        cout << "Uploading generic media content to the cloud...\n";
    }
};

// Derived Class 1
class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "📸 Instagram: Compressing asset into a 9:16 aspect ratio reel and posting to Feed...\n";
    }
};

// Derived Class 2
class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent() override
    {
        cout << "🎥 YouTube: Processing 4K video streams, generating thumbnails, and checking copyright data...\n";
    }
};

int main()
{
    InstagramUploader insta;
    YouTubeUploader yt;

    // Executing overridden methods
    insta.uploadContent();
    yt.uploadContent();

    return 0;
}