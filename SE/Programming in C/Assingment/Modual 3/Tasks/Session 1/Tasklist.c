// tasklist_c.c
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5

char tasks[MAX_TASKS][100];
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
    return 0;
}