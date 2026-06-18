#include <iostream>
#include <string>

int main()
{
    const int DAYS_IN_WEEK = 7;
    double screenTimeData[DAYS_IN_WEEK];
    double totalScreenTime = 0.0;
    const std::string DAYS[DAYS_IN_WEEK] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    const double HEALTHY_DAILY_LIMIT = 4.0; // Threshold boundary condition in hours

    std::cout << "=== Weekly Screen Time Analyzer ===\n\n";

    // Data ingestion loop
    for (int i = 0; i < DAYS_IN_WEEK; i++)
    {
        std::cout << "Enter screen time for " << DAYS[i] << " (in hours): ";
        std::cin >> screenTimeData[i];

        // Input validation for realistic values
        while (screenTimeData[i] < 0 || screenTimeData[i] > 24)
        {
            std::cout << "❌ Invalid data. Please enter a value between 0 and 24 hours: ";
            std::cin >> screenTimeData[i];
        }

        totalScreenTime += screenTimeData[i];
    }

    // Mathematical processing
    double averageScreenTime = totalScreenTime / DAYS_IN_WEEK;

    // Displaying performance analytics
    std::cout << "\n--- Diagnostic Report ---\n";
    std::cout << "Total Screen Time:   " << totalScreenTime << " hours\n";
    std::cout << "Average Screen Time: " << averageScreenTime << " hours/day\n";

    // Conditional warning assertion
    if (averageScreenTime > HEALTHY_DAILY_LIMIT)
    {
        std::cout << "\n🚨 WARNING: Your average screen time exceeds the healthy limit of "
                  << HEALTHY_DAILY_LIMIT << " hours.\n";
        std::cout << "Consider setting application limits to protect your eye health and focus!\n";
    }
    else
    {
        std::cout << "\n✅ Balanced Habits: Your screen time averages are within healthy thresholds.\n";
    }

    return 0;
}