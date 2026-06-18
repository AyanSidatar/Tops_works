#include <iostream>
#include <string>

using namespace std;

class Movie
{
public:
    string title;
    string director;

    // Parameterized Constructor
    Movie(string t, string d)
    {
        title = t;
        director = d;
    }

    // Copy Constructor
    Movie(const Movie &oldMovie)
    {
        title = oldMovie.title;
        director = oldMovie.director;
        cout << "📋 Copy constructor called! Duplicating movie object...\n";
    }

    void display()
    {
        cout << "Movie: " << title << " | Director: " << director << "\n";
    }
};

int main()
{
    // 1. Create the original movie object
    Movie originalMovie("Inception", "Christopher Nolan");

    // 2. Create a copy using the copy constructor
    Movie copiedMovie = originalMovie;

    // 3. Print both to verify they are identical
    cout << "\n[Original] ";
    originalMovie.display();

    cout << "[Copied]   ";
    copiedMovie.display();

    return 0;
}