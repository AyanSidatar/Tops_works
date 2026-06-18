#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Playlist
{
public:
    string name;

    // Constructor
    Playlist(string customName)
    {
        name = customName;
        cout << "🎧 Active Playlist Session: '" << name << "'\n";
    }

    // Destructor handles Spotify-style auto-saving
    ~Playlist()
    {
        ofstream outFile("autosave.txt");
        if (outFile)
        {
            outFile << name << "\n";
            outFile.close();
            cout << "⚙️ Auto-save complete! Saved '" << name << "' to autosave.txt\n";
        }
        else
        {
            cout << "❌ Error running background auto-save routine.\n";
        }
    }
};

int main()
{
    // Create a playlist object
    Playlist dynamicPlaylist("My Summer Vibes 2026");

    cout << "User is playing music tracks...\n";
    cout << "Closing application tab...\n";

    return 0;
} // <-- Object is destroyed here, triggering file creation automatically