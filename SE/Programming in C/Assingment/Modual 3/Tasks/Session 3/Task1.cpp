#include <iostream>
#include <string>

using namespace std;

class Playlist
{
public:
    string name;

    // Default Constructor
    Playlist()
    {
        name = "My Favourites";
        cout << "🎵 Welcome! Your new playlist has been initialized.\n";
    }
};

int main()
{
    // Creating an object triggers the default constructor automatically
    Playlist myPlaylist;

    // Printing the property initialized by the constructor
    cout << "Playlist Name: " << myPlaylist.name << "\n";

    return 0;
}