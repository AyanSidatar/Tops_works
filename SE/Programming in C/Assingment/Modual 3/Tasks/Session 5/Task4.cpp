#include <iostream>
#include <string>

using namespace std;

class MusicPlayer
{
public:
    // The function MUST be marked virtual to trigger Dynamic Method Dispatch
    virtual void play(string song)
    {
        cout << "Playing: " << song << "\n";
    }

    // Virtual destructor is vital when dealing with polymorphism
    virtual ~MusicPlayer() = default;
};

class SpotifyPlayer : public MusicPlayer
{
public:
    void play(string song) override
    {
        cout << "Streaming on Spotify: " << song << "\n";
    }
};

int main()
{
    // Creating a Base class pointer pointing to a Derived class object
    MusicPlayer *player = new SpotifyPlayer();

    // Calling the function
    player->play("Blinding Lights");

    // Cleaning up allocated heap memory
    delete player;

    return 0;
}