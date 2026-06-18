#include <iostream>
#include <string>
#include <vector>

class Playlist
{
public:
    std::string name;
    std::string createdOn;
    bool isPublic;
    std::vector<std::string> songs; // Array property to hold song titles

    Playlist(std::string p_name, std::string p_createdOn, bool p_isPublic)
    {
        name = p_name;
        createdOn = p_createdOn;
        isPublic = p_isPublic;
        // songs vector is automatically initialized as empty
    }

    // Member function to add a song
    void addSong(std::string songTitle)
    {
        songs.push_back(songTitle);
    }

    // Member function to display the songs list
    void displaySongs()
    {
        std::cout << "--- " << name << " Song List ---\n";
        if (songs.empty())
        {
            std::cout << "No songs in this playlist.\n";
            return;
        }
        for (int i = 0; i < songs.size(); i++)
        {
            std::cout << i + 1 << ". " << songs[i] << "\n";
        }
    }
};

int main()
{
    Playlist myPlaylist("Coding Session", "2026-06-15", true);

    // Adding three song titles
    myPlaylist.addSong("Midnight City");
    myPlaylist.addSong("Starboy");
    myPlaylist.addSong("Blinding Lights");

    // Displaying the updated songs list
    myPlaylist.displaySongs();

    return 0;
}