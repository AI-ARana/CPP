/*Implement a program for managing bank accounts. 
Use polymorphism to handle different types of accounts 
(e.g., Savings Account, Checking Account) with a common interface 
for deposit, withdrawal, and interest calculation.*/
#include <iostream>

class Account {
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void calculateInterest() = 0;
    virtual ~Account() {} // Virtual destructor
};

class SavingsAccount : public Account {
public:
    void deposit(double amount) override {
        // Implementation for deposit in Savings Account
        std::cout << "Depositing into Savings Account: " << amount << std::endl;
    }

    void withdraw(double amount) override {
        // Implementation for withdrawal in Savings Account
        std::cout << "Withdrawing from Savings Account: " << amount << std::endl;
    }

    void calculateInterest() override {
        // Implementation for interest calculation in Savings Account
        std::cout << "Calculating interest for Savings Account\n";
    }
};

class CheckingAccount : public Account {
public:
    void deposit(double amount) override {
        // Implementation for deposit in Checking Account
        std::cout << "Depositing into Checking Account: " << amount << std::endl;
    }

    void withdraw(double amount) override {
        // Implementation for withdrawal in Checking Account
        std::cout << "Withdrawing from Checking Account: " << amount << std::endl;
    }

    void calculateInterest() override {
        // Implementation for interest calculation in Checking Account
        std::cout << "No interest calculation for Checking Account\n";
    }
};

int main() {
    Account* accounts[] = {new SavingsAccount(), new CheckingAccount()};
    for (Account* acc : accounts) {
        acc->deposit(1000); // Example usage
        acc->withdraw(100);
        acc->calculateInterest();
        delete acc;
    }
    return 0;
}
