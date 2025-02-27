#include <iostream>

using namespace std;

int main() {
    int choice;
    double balance = 5000.0;  // Initial balance
    double amount;

    do {
        // Display menu
        cout << "\n===== ATM Simulator =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle input errors
        // if (cin.fail()) {
        //     cin.clear();  // Reset the cin state
        //     cin.ignore(1000, '\n');  // Ignore incorrect input
        //     cout << "Invalid input! Please enter a number.\n";
        //     continue;  // Restart the loop
        // }

        switch (choice) {
            case 1:  // Check balance
                cout << "Your current balance is: Rs. " << balance << endl;
                cout << "Press Enter to continue...";
                cin.ignore();  // Ignore any leftover input
                cin.get();  // Wait for user to press Enter
                break;

            case 2:  // Deposit money
                cout << "Enter the amount to deposit: Rs. ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Rs. " << amount << " deposited successfully.\n";
                } else {
                    cout << "Invalid amount! Please enter a positive value.\n";
                }
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;

            case 3:  // Withdraw money
                cout << "Enter the amount to withdraw: Rs. ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Rs. " << amount << " withdrawn successfully.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    cout << "Invalid amount! Please enter a positive value.\n";
                }
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
                break;

            case 4:  // Exit
                cout << "Thank you for using our ATM!\n";
                break;

            default:
                cout << "Invalid choice! Please select a valid option.\n";
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
        }

    } while (choice != 4);  // Loop until user exits

    return 0;
}
