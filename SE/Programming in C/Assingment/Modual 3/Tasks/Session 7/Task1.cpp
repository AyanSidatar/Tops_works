#include <iostream>
#include <fstream> // Required for file streams

using namespace std;

int main()
{
    // Open the file for writing (creates the file if it doesn't exist)
    ofstream outFile("my_fav_songs.txt");

    // Check if the file opened successfully
    if (!outFile)
    {
        cout << "❌ Error opening file for writing!\n";
        return 1; // Exit program with an error code
    }

    // Write 5 songs into the file (one per line)
    outFile << "Blinding Lights\n";
    outFile << "Starboy\n";
    outFile << "Shape of You\n";
    outFile << "Perfect\n";
    outFile << "Believer\n";

    // Always close the file stream when done
    outFile.close();

    cout << "💾 File 'my_fav_songs.txt' created and songs saved successfully!\n";
    return 0;
}