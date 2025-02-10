#include<iostream>
using namespace std;

class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    Account() : balance(0.0) {}

    Account(string accountNumber, string accountHolderName, double balance)
        : accountNumber(accountNumber), accountHolderName(accountHolderName), balance(balance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else if (balance < amount) {
            cout << "Insufficient funds." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    void displayDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
    }
};

int main() {
    Account account1("123456789", "Fadil", 1000.0);
    Account account2("987654321", "Ahmed", 500.0);
    Account account3; 

    cout << "Account 1 Details:" << endl;
    account1.displayDetails();
    cout << "Account 2 Details:" << endl;
    account2.displayDetails();
    cout << "Account 3 Details:" << endl;
    account3.displayDetails();

    account1.deposit(500.0);
    account2.deposit(200.0);
    account3.deposit(1000.0);
    account1.withdraw(200.0);
    account2.withdraw(300.0);
    account3.withdraw(500.0);
    account1.checkBalance();
    account2.checkBalance();
    account3.checkBalance();
    return 0;
}