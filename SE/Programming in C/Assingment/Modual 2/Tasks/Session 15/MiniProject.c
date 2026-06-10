#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DAYS_IN_WEEK 7

const char *DAYS[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

// Function Prototypes
void logMinutes(int logArray[]);
void viewSummary(int logArray[]);
void generateWeeklyReport();
void resetData(int logArray[]);
void loadDataFromFile(int logArray[]);

int main()
{
    int weeklyLog[DAYS_IN_WEEK] = {0};
    int choice;

    loadDataFromFile(weeklyLog);

    while (1)
    {
        printf("\n===================================\n");
        printf("      MUSIC LISTENING LOGGER       \n");
        printf("===================================\n");
        printf("1. Log Daily Listening Minutes\n");
        printf("2. View Current Week Summary\n");
        printf("3. Generate File-Based Weekly Report\n");
        printf("4. Reset Weekly Data (Clear Logger)\n");
        printf("5. Exit Application\n");
        printf("-----------------------------------\n");
        printf("Enter your choice (1-5): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (choice)
        {
        case 1:
            logMinutes(weeklyLog);
            break;
        case 2:
            viewSummary(weeklyLog);
            break;
        case 3:
            generateWeeklyReport();
            break;
        case 4:
            resetData(weeklyLog);
            break;
        case 5:
            printf("\nThank you for using Music Listening Logger. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice! Please select an option between 1 and 5.\n");
        }
    }

    return 0;
}

void logMinutes(int logArray[])
{
    printf("\n--- Log Daily Listening Minutes ---\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++)
    {
        printf("Enter minutes listened for %s: ", DAYS[i]);
        while (scanf("%d", &logArray[i]) != 1 || logArray[i] < 0)
        {
            printf("Invalid input! Please enter a valid non-negative integer for %s: ", DAYS[i]);
            while (getchar() != '\n')
                ; // Clear buffer4
        }
    }
    FILE *file = fopen("music_log.txt", "w");
    if (file == NULL)
    {
        printf("Error: Could not save data to file!\n");
        return;
    }

    for (int i = 0; i < DAYS_IN_WEEK; i++)
    {
        fprintf(file, "%d\n", logArray[i]);
    }
    fclose(file);

    printf("\nData successfully logged and saved to 'music_log.txt'!\n");
}

void viewSummary(int logArray[])
{
    printf("\n--- Current Week Memory Summary ---\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++)
    {
        printf("%-10s: %d minutes\n", DAYS[i], logArray[i]);
    }
}

void generateWeeklyReport()
{
    FILE *file = fopen("music_log.txt", "r");
    if (file == NULL)
    {
        printf("\nNo saved data found. Please log listening minutes first (Option 1).\n");
        return;
    }

    int minutes;
    int total = 0;
    int highest = -1;
    int daysRead = 0;
    char highestDay[20] = "None";

    while (fscanf(file, "%d", &minutes) != EOF && daysRead < DAYS_IN_WEEK)
    {
        total += minutes;
        if (minutes > highest)
        {
            highest = minutes;
            strcpy(highestDay, DAYS[daysRead]);
        }
        daysRead++;
    }
    fclose(file);

    if (daysRead == 0)
    {
        printf("\nThe log file is empty. Please log minutes first.\n");
        return;
    }

    float average = (float)total / daysRead;

    printf("\n===================================\n");
    printf("     WEEKLY ANALYSIS REPORT        \n");
    printf("===================================\n");
    printf("Total Time Spent : %d minutes\n", total);
    printf("Daily Average    : %.2f minutes\n", average);
    printf("Peak Performance : %d minutes (on %s)\n", highest, highestDay);
    printf("===================================\n");
}

void resetData(int logArray[])
{
    char confirmation;

    printf("\n[WARNING] Are you sure you want to reset all weekly data? (y/n): ");
    while (getchar() != '\n')
        scanf("%c", &confirmation);

    if (confirmation == 'y' || confirmation == 'Y')
    {
        for (int i = 0; i < DAYS_IN_WEEK; i++)
        {
            logArray[i] = 0;
        }

        FILE *file = fopen("music_log.txt", "w");
        if (file != NULL)
        {
            fclose(file);
        }

        printf("\nSuccess: System memory arrays and 'music_log.txt' text files purged.\n");
    }
    else
    {
        printf("\nReset operation aborted. Your data remains safe.\n");
    }
}

void loadDataFromFile(int logArray[])
{
    FILE *file = fopen("music_log.txt", "r");
    if (file == NULL)
    {
        return;
    }

    int i = 0;
    while (fscanf(file, "%d", &logArray[i]) != EOF && i < DAYS_IN_WEEK)
    {
        i++;
    }
    fclose(file);
}