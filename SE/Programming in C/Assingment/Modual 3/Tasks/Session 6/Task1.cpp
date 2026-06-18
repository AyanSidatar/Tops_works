#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
    string title;
    string artist;

public:
    // Constructor
    Song(string t, string a)
    {
        title = t;
        artist = a;
    }

    // Setter for Title
    void setTitle(string t)
    {
        title = t;
    }

    // Getter for Title
    string getTitle()
    {
        return title;
    }

    // Getter for Artist
    string getArtist()
    {
        return artist;
    }
};

int main()
{
    // Creating a song object
    Song mySong("Blinding Lights", "The Weeknd");
    cout << "Original Song: " << mySong.getTitle() << " by " << mySong.getArtist() << "\n";

    // Modifying the title safely using the public setter
    mySong.setTitle("Save Your Tears");

    cout << "Updated Song:  " << mySong.getTitle() << " by " << mySong.getArtist() << "\n";

    return 0;
}