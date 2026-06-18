// tasklist.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ── Task ────────────────────────────────────────────────
class Task
{
public:
    string title;
    bool isDone;

    Task(string t) : title(t), isDone(false) {}

    void markDone() { isDone = true; }

    void display(int index) const
    {
        cout << index << ". " << title
             << " [" << (isDone ? "DONE" : "PENDING") << "]" << endl;
    }
};

// ── TaskList ─────────────────────────────────────────────
class TaskList
{
private:
    vector<Task> tasks;

public:
    // Add a new task by title
    void addTask(const string &title)
    {
        tasks.push_back(Task(title));
        cout << "Task added: \"" << title << "\"\n";
    }

    // Mark a task done by 0-based index
    void markTaskDone(int index)
    {
        if (index < 0 || index >= (int)tasks.size())
        {
            cout << "Invalid index: " << index << endl;
            return;
        }
        tasks[index].markDone();
        cout << "Marked done: \"" << tasks[index].title << "\"\n";
    }

    // Print all tasks with their status
    void showTasks() const
    {
        cout << "\n===== Task List =====\n";
        if (tasks.empty())
        {
            cout << "  (no tasks)\n";
        }
        else
        {
            for (int i = 0; i < (int)tasks.size(); i++)
            {
                tasks[i].display(i + 1);
            }
        }
        cout << "=====================\n";
    }
};

// ── Demo ─────────────────────────────────────────────────
int main()
{
    TaskList list;

    list.addTask("Buy groceries");
    list.addTask("Read a book");
    list.addTask("Write report");

    list.showTasks();

    list.markTaskDone(1); // Mark "Read a book"

    list.showTasks();

    return 0;
}