// Create a class BankAccount with data members like balance and member functions
// like deposit and withdraw. Implement encapsulation by keeping the data members
// private.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // private data member

public:
    // Constructor
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Invalid initial balance! Setting balance to 0." << endl;
        }
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or Insufficient balance!" << endl;
        }
    }

    // Check balance
    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1(1000); // Initial balance 1000

    account1.checkBalance();
    account1.deposit(500);
    account1.withdraw(300);
    account1.withdraw(2000); // Invalid (greater than balance)
    account1.checkBalance();

}

