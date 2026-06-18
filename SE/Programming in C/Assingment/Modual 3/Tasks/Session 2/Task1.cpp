#include <iostream>
#include <string>

class Playlist
{
public:
    std::string name;
    std::string createdOn; // Storing date as a string for simplicity
    bool isPublic;

    // Constructor
    Playlist(std::string p_name, std::string p_createdOn, bool p_isPublic)
    {
        name = p_name;
        createdOn = p_createdOn;
        isPublic = p_isPublic;
    }

    // Helper function to print properties
    void display()
    {
        std::cout << "Playlist Name: " << name << "\n";
        std::cout << "Created On: " << createdOn << "\n";
        std::cout << "Is Public: " << (isPublic ? "True" : "False") << "\n";
    }
};

int main()
{
    // Instantiating an object of Playlist
    Playlist myPlaylist("Chill Vibes", "2026-06-15", false);

    // Printing all properties
    myPlaylist.display();

    return 0;
}