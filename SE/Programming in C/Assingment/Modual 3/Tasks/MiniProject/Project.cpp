#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1. Create a Content Class
class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    // Method to display all details of a Content object
    void displayDetails()
    {
        cout << "\n---------------------------------\n";
        cout << "🎬 Title:    " << title << "\n";
        cout << "📱 Platform: " << platform << "\n";
        cout << "👀 Views:    " << views << "\n";
        cout << "📌 Status:   " << status << "\n";
        cout << "---------------------------------\n";
    }
};

// Function Declarations (Prototypes)
void addContentIdea();
void displayNumberedList();
void updateContentStatus();
void deleteContentItem();

int main()
{
    int choice = 0;

    // Main Console Menu Loop
    while (choice != 5)
    {
        cout << "\n=== CONTENT IDEA TRACKER ===\n";
        cout << "1. Add New Content Idea\n";
        cout << "2. View All Content Ideas\n";
        cout << "3. Update Content Status\n";
        cout << "4. Delete a Content Idea\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1)
        {
            addContentIdea();
        }
        else if (choice == 2)
        {
            cout << "\n=== YOUR CONTENT LIST ===\n";
            displayNumberedList();
        }
        else if (choice == 3)
        {
            updateContentStatus();
        }
        else if (choice == 4)
        {
            deleteContentItem();
        }
        else if (choice == 5)
        {
            cout << "\nExiting... Keep creating great content!\n";
        }
        else
        {
            cout << "❌ Invalid choice! Please select between 1 and 5.\n";
        }
    }

    return 0;
}

// 2. Function to add new content ideas and save them to a file
void addContentIdea()
{
    // Open in APPEND mode so we don't delete old ideas
    ofstream outFile("content_list.txt", ios::app);

    if (!outFile)
    {
        cout << "❌ Error opening file!\n";
        return;
    }

    Content newContent;
    cout << "\nEnter Content Title: ";
    cin.ignore(); // Clear newline buffer
    getline(cin, newContent.title);

    cout << "Enter Platform (YouTube/Instagram/TikTok): ";
    getline(cin, newContent.platform);

    cout << "Enter Estimated/Current Views: ";
    cin >> newContent.views;

    cout << "Enter Status (Idea/Draft/Published): ";
    cin.ignore();
    getline(cin, newContent.status);

    // Save properties separated by newlines for easy reading later
    outFile << newContent.title << "\n";
    outFile << newContent.platform << "\n";
    outFile << newContent.views << "\n";
    outFile << newContent.status << "\n";

    outFile.close();
    cout << "💾 Content idea saved successfully!\n";
}

// 3. Function to display content in a numbered list
void displayNumberedList()
{
    ifstream inFile("content_list.txt");

    if (!inFile)
    {
        cout << "📂 No content ideas found yet. Add some first!\n";
        return;
    }

    string title, platform, status;
    int views;
    int itemNumber = 1;

    // Read blocks of 4 lines corresponding to our object properties
    while (getline(inFile, title) && getline(inFile, platform) && (inFile >> views) && inFile.ignore() && getline(inFile, status))
    {
        cout << itemNumber << ". [" << platform << "] " << title << " (Status: " << status << ")\n";
        itemNumber++;
    }

    inFile.close();
}

// 4. Function to update the status of a content idea
void updateContentStatus()
{
    cout << "\n=== Update Content Status ===\n";
    displayNumberedList();

    ifstream inFile("content_list.txt");
    if (!inFile)
        return; // Error handled inside displayNumberedList()

    int targetNumber;
    cout << "\nEnter the number of the item you want to update: ";
    cin >> targetNumber;

    string newStatus;
    cout << "Enter new status (Idea/Draft/Published): ";
    cin.ignore();
    getline(cin, newStatus);

    // Create a temporary file to hold the modified copy of our data
    ofstream tempFile("temp.txt");

    string title, platform, status;
    int views;
    int currentItem = 1;

    while (getline(inFile, title) && getline(inFile, platform) && (inFile >> views) && inFile.ignore() && getline(inFile, status))
    {
        if (currentItem == targetNumber)
        {
            // Write the updated status instead of the old one
            tempFile << title << "\n"
                     << platform << "\n"
                     << views << "\n"
                     << newStatus << "\n";
            cout << "✅ Status updated successfully!\n";
        }
        else
        {
            // Write the original data unchanged
            tempFile << title << "\n"
                     << platform << "\n"
                     << views << "\n"
                     << status << "\n";
        }
        currentItem++;
    }

    inFile.close();
    tempFile.close();

    // Replace the original file with the modified temporary file
    remove("content_list.txt");
    rename("temp.txt", "content_list.txt");
}

// 5. Function to delete a content item by its list number
void deleteContentItem()
{
    cout << "\n=== Delete a Content Idea ===\n";
    displayNumberedList();

    ifstream inFile("content_list.txt");
    if (!inFile)
        return;

    int targetNumber;
    cout << "\nEnter the number of the item you want to delete: ";
    cin >> targetNumber;

    ofstream tempFile("temp.txt");

    string title, platform, status;
    int views;
    int currentItem = 1;
    bool deleted = false;

    while (getline(inFile, title) && getline(inFile, platform) && (inFile >> views) && inFile.ignore() && getline(inFile, status))
    {
        if (currentItem == targetNumber)
        {
            // By skipping the file-write stream statement for this block, it is deleted!
            deleted = true;
            cout << "🗑️ '" << title << "' has been removed.\n";
        }
        else
        {
            // Keep everything else
            tempFile << title << "\n"
                     << platform << "\n"
                     << views << "\n"
                     << status << "\n";
        }
        currentItem++;
    }

    inFile.close();
    tempFile.close();

    remove("content_list.txt");
    rename("temp.txt", "content_list.txt");

    // Confirm the deletion by displaying the fresh, updated list
    if (deleted)
    {
        cout << "\n=== Updated Content List ===\n";
        displayNumberedList();
    }
    else
    {
        cout << "❌ Item number not found!\n";
    }
}