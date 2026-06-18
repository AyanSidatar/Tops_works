#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // 1. Setup variables and arrays
    const int DAYS = 7;
    double studyHours[DAYS] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    string daysOfWeek[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int choice = 0;

    // 2. FILE HANDLING: Load saved data when program starts
    ifstream inputFile("tracker_data.txt");
    if (inputFile)
    {
        for (int i = 0; i < DAYS; i++)
        {
            inputFile >> studyHours[i];
        }
        inputFile.close();
        cout << "📂 Previous study hours loaded successfully!\n";
    }
    else
    {
        cout << "🌱 No saved data found. Starting a fresh week!\n";
    }

    // 3. Main Menu Loop
    while (choice != 3)
    {
        cout << "\n--- STUDENT PRODUCTIVITY TRACKER ---\n";
        cout << "1. Log Daily Study Hours\n";
        cout << "2. Generate Weekly Report\n";
        cout << "3. Save and Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        // Choice 1: Log Study Hours
        if (choice == 1)
        {
            cout << "\nSelect a day (1-7):\n";
            for (int i = 0; i < DAYS; i++)
            {
                cout << i + 1 << ". " << daysOfWeek[i] << " (" << studyHours[i] << " hours)\n";
            }
            int dayChoice;
            cout << "Enter day number: ";
            cin >> dayChoice;

            // Simple validation check
            if (dayChoice >= 1 && dayChoice <= 7)
            {
                double hours;
                cout << "Enter study hours for " << daysOfWeek[dayChoice - 1] << ": ";
                cin >> hours;

                if (hours >= 0 && hours <= 24)
                {
                    studyHours[dayChoice - 1] = hours;
                    cout << "✅ Hours updated successfully!\n";
                }
                else
                {
                    cout << "❌ Invalid hours! Must be between 0 and 24.\n";
                }
            }
            else
            {
                cout << "❌ Invalid day selection!\n";
            }
        }
        // Choice 2: Generate Weekly Report
        else if (choice == 2)
        {
            double total = 0.0;

            cout << "\n=== WEEKLY STUDY REPORT ===\n";
            for (int i = 0; i < DAYS; i++)
            {
                cout << daysOfWeek[i] << ": " << studyHours[i] << " hours\n";
                total = total + studyHours[i]; // Add hours up
            }

            double average = total / DAYS;

            cout << "---------------------------\n";
            cout << "📊 Total Hours Studied: " << total << " hours\n";
            cout << "📈 Daily Average: " << average << " hours/day\n";

            // Give basic feedback based on average
            if (average >= 4.0)
            {
                cout << "🔥 Fantastic job! You are working incredibly hard.\n";
            }
            else if (average >= 1.5)
            {
                cout << "👍 Steady pace. Keep up the consistent habit!\n";
            }
            else
            {
                cout << "💤 A bit low this week. Try scheduling a short focus block tomorrow!\n";
            }
            cout << "===========================\n";
        }
        // Choice 3: Exit message
        else if (choice == 3)
        {
            cout << "\nSaving data... Goodbye!\n";
        }
        // Handle bad menu typing
        else
        {
            cout << "⚠️ Invalid menu choice! Please enter 1, 2, or 3.\n";
        }
    }

    // 4. FILE HANDLING: Save data right before closing
    ofstream outputFile("tracker_data.txt");
    if (outputFile)
    {
        for (int i = 0; i < DAYS; i++)
        {
            outputFile << studyHours[i] << "\n";
        }
        outputFile.close();
        cout << "💾 Data successfully saved to 'tracker_data.txt'.\n";
    }
    else
    {
        cout << "❌ Error saving data to file!\n";
    }

    return 0;
}