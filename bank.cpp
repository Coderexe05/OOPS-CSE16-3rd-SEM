#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNo, double initialBalance = 0.0) {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    // Display account details
    void display() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Ayush", 12345, 5000.0);

    acc.display();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.withdraw(6000); // Example of insufficient balance
    acc.display();

    return 0;
    
}