// tasklist_c.c (modified)
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define MAX_LEN 100

char tasks[MAX_TASKS][MAX_LEN];
int taskCount = 0;

void addTask(const char *task)
{
    if (taskCount < MAX_TASKS)
    {
        strcpy(tasks[taskCount], task);
        taskCount++;
    }
    else
    {
        printf("Task list is full!\n");
    }
}

// Appends " - DONE" to the chosen task string
void markTaskDone(int index)
{
    if (index < 0 || index >= taskCount)
    {
        printf("Invalid index!\n");
        return;
    }
    // Only append if not already marked
    if (strstr(tasks[index], " - DONE") == NULL)
    {
        strncat(tasks[index], " - DONE", MAX_LEN - strlen(tasks[index]) - 1);
    }
}

void printTasks()
{
    printf("\n--- Task List ---\n");
    for (int i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
    printf("-----------------\n");
}

int main()
{
    addTask("Buy groceries");
    addTask("Read a book");
    addTask("Write report");

    printTasks();

    markTaskDone(1); // Mark "Read a book" as done
    printf("\nAfter marking task 2 as done:");
    printTasks();

    return 0;
}