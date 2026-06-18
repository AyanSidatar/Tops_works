// task.cpp
#include <iostream>
#include <string>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    // Constructor
    Task(string t) : title(t), isDone(false) {}

    // Mark the task as done
    void markDone()
    {
        isDone = true;
    }

    // Display the task with its status
    void display() const
    {
        cout << "- " << title
             << " [" << (isDone ? "DONE" : "PENDING") << "]" << endl;
    }
};

int main()
{
    Task t1("Buy groceries");
    Task t2("Read a book");

    t1.display();
    t2.display();

    t1.markDone();
    cout << "\nAfter marking t1 done:\n";
    t1.display();
    t2.display();

    return 0;
}