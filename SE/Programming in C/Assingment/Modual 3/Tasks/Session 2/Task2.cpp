#include <iostream>
#include <string>

class Playlist
{
public:
    std::string name;
    std::string createdOn;
    bool isPublic;

    Playlist(std::string p_name, std::string p_createdOn, bool p_isPublic)
    {
        name = p_name;
        createdOn = p_createdOn;
        isPublic = p_isPublic;
    }

    // Member function to toggle visibility
    void togglePublic()
    {
        isPublic = !isPublic;
    }

    void displayStatus()
    {
        std::cout << "Current isPublic status: " << (isPublic ? "True" : "False") << "\n";
    }
};

int main()
{
    Playlist myPlaylist("Gym Beats", "2026-06-15", false);

    std::cout << "Initial status:\n";
    myPlaylist.displayStatus();

    // Toggle 1
    myPlaylist.togglePublic();
    std::cout << "After 1st toggle:\n";
    myPlaylist.displayStatus();

    // Toggle 2
    myPlaylist.togglePublic();
    std::cout << "After 2nd toggle:\n";
    myPlaylist.displayStatus();

    return 0;
}