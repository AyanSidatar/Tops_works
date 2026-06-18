#include <iostream>
#include <string>

using namespace std;

class InstaStory
{
protected:
    int storyViews; // Accessible only within this class and its child classes

public:
    InstaStory(int views)
    {
        storyViews = views;
    }
};

// Subclass inheriting from InstaStory
class SponsoredStory : public InstaStory
{
private:
    double adBudget;

public:
    SponsoredStory(int views, double budget) : InstaStory(views)
    {
        adBudget = budget;
    }

    void displayAdPerformance()
    {
        // Direct access to storyViews is allowed here because it is protected
        cout << "📈 Sponsored Ad Performance Report:\n";
        cout << "-> Current Views: " << storyViews << "\n";
        cout << "-> Budget Spent:  $" << adBudget << "\n";
    }
};

int main()
{
    // Create a child class instance
    SponsoredStory ad(14205, 250.00);
    ad.displayAdPerformance();

    return 0;
}