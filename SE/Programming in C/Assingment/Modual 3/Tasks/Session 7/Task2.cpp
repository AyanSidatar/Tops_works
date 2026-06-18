#include <iostream>
#include <fstream>
#include <string> // Required to use the string data type

using namespace std;

int main()
{
    // Open the file for reading
    ifstream inFile("my_fav_songs.txt");

    if (!inFile)
    {
        cout << "❌ Error: Could not find or open 'my_fav_songs.txt'!\n";
        return 1;
    }

    cout << "--- Your Favorite Songs List ---\n";
    string songLine;

    // Read the file line by line until reaching the end of the file (EOF)
    while (getline(inFile, songLine))
    {
        cout << "🎵 " << songLine << "\n";
    }

    // Close the file stream
    inFile.close();

    return 0;
}