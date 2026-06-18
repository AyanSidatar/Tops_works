#include <iostream>

int main()
{
    double hoursStudied = 0.0;

    std::cout << "=========================================\n";
    std::cout << "       STUDY MOOD ASSISTANT 📚           \n";
    std::cout << "=========================================\n";
    std::cout << "Enter the total hours you studied today: ";
    std::cin >> hoursStudied;

    // Boundary validation check
    if (hoursStudied < 0)
    {
        std::cout << "❌ Invalid input. Time cannot be negative!\n";
    }
    // Conditional logic ladder
    else if (hoursStudied == 0)
    {
        std::cout << "⚠️ It's okay! Tomorrow is a fresh start. Take 15 minutes to plan your goals.\n";
    }
    else if (hoursStudied > 0 && hoursStudied <= 2)
    {
        std::cout << "🌱 Good start! Small daily efforts compound into major achievements.\n";
    }
    else if (hoursStudied > 2 && hoursStudied <= 5)
    {
        std::cout << "🚀 Excellent progress! You are in a great productivity flow.\n";
    }
    else if (hoursStudied > 5 && hoursStudied <= 10)
    {
        std::cout << "👑 Elite focus! Exceptional work today, you're crushing your objectives.\n";
    }
    else
    {
        std::cout << "🛑 Warning: Outstanding dedication, but don't forget to rest to avoid burnout!\n";
    }

    std::cout << "=========================================\n";
    return 0;
}