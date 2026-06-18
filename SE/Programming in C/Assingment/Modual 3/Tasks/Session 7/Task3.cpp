#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Open the file in output mode with the APPEND flag (ios::app)
    ofstream outFile("my_fav_songs.txt", ios::app);

    if (!outFile)
    {
        cout << "❌ Error opening file!\n";
        return 1;
    }

    string userSong;
    cout << "Enter a new song to add to your list: ";
    getline(cin, userSong); // Allows reading song names with spaces

    // Write the new song followed by a newline character
    outFile << userSong << "\n";
    outFile.close();

    cout << "✅ '" << userSong << "' has been appended to the file without deleting old entries!\n";
    return 0;
}