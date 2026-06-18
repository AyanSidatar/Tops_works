#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string fileName = "daily_goals.txt";
    int userChoice = 0;

    std::cout << "=== Personal Daily Goals Logger ===\n\n";
    std::cout << "1. View Active Daily Goals\n";
    std::cout << "2. Append New Daily Goals\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> userChoice;
    std::cin.ignore(); // Clear the newline delimiter out of the stream buffer

    if (userChoice == 1)
    {
        // Use input file stream mode (std::ios::in is implicit here)
        std::ifstream readerFile(fileName);

        if (!readerFile)
        {
            std::cout << "\n📂 No active goals file discovered. Create one by choosing option 2!\n";
        }
        else
        {
            std::cout << "\n--- Your Saved Daily Goals ---\n";
            std::string individualGoalLine;
            int lineNumber = 1;

            // Read lines until reaching the EOF (End-of-File) marker
            while (std::getline(readerFile, individualGoalLine))
            {
                std::cout << lineNumber << ". " << individualGoalLine << "\n";
                lineNumber++;
            }
            readerFile.close();
        }
    }
    else if (userChoice == 2)
    {
        // Use output file stream with append mode flag (std::ios::app)
        // This stops the system from clearing out your previous goals on write
        std::ofstream writerFile(fileName, std::ios::app);

        if (!writerFile)
        {
            std::cout << "❌ Serious Error: Unable to access or create target data file.\n";
            return 1;
        }

        std::string newGoal;
        std::cout << "\nEnter your new objective text: ";
        std::getline(std::cin, newGoal);

        // Write to stream followed by a newline character
        writerFile << newGoal << "\n";
        writerFile.close();

        std::cout << "💾 Goal successfully committed to permanent storage!\n";
    }
    else
    {
        std::cout << "⚠️ Invalid interface option selected. Closing application pipeline.\n";
    }

    return 0;
}