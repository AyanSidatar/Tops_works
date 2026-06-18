#include <iostream>
#include <string>

using namespace std;

class PaymentProcessor
{
public:
    // Version 1: Takes only the amount
    void processPayment(double amount)
    {
        cout << "[Version 1 Called] Standard Payment Processing...\n";
        cout << "Final Amount Charged: $" << amount << "\n\n";
    }

    // Version 2: Takes the amount and a coupon code
    void processPayment(double amount, string couponCode)
    {
        cout << "[Version 2 Called] Coupon applied: " << couponCode << "\n";

        double finalAmount = amount;
        if (couponCode == "SAVE10")
        {
            finalAmount = amount - (amount * 0.10); // 10% discount
            cout << "🎉 Valid Coupon! 10% discount applied.\n";
        }
        else
        {
            cout << "❌ Invalid Coupon Code.\n";
        }

        cout << "Final Amount Charged: $" << finalAmount << "\n\n";
    }
};

int main()
{
    PaymentProcessor processor;

    // Call standard payment
    processor.processPayment(100.0);

    // Call payment with a coupon code
    processor.processPayment(100.0, "SAVE10");

    return 0;
}