#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Setup step: Let's create a sample file first to make sure the program can test properly
    ofstream setupFile("insta_followers.txt");
    setupFile << "alpha_coder\nbeta_tester\ngaming_king\ntech_reviews_2026\ncode_student\n";
    setupFile.close();

    // --- Core Exercise Solution Starts Here ---
    ifstream inFile("insta_followers.txt");
    if (!inFile)
    {
        cout << "❌ Error: Could not locate 'insta_followers.txt'. Make sure it exists first!\n";
        return 1;
    }

    string temporaryLine;
    int followerCount = 0;

    // Read lines one by one. The loop increments the counter every time a line is found
    while (getline(inFile, temporaryLine))
    {
        followerCount++;
    }
    inFile.close();

    // Display total metric result
    cout << "=========================================\n";
    cout << "📊 INSTAGRAM FOLLOWER REPORT             \n";
    cout << "=========================================\n";
    cout << "📈 Total Followers Listed: " << followerCount << "\n";
    cout << "=========================================\n";

    return 0;
}