#include <iostream>
#include <cmath>  // For pow() and sqrt()

using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    int n,fact;
    system("cls");
    do{
    // Display menu
    cout << "===== Advanced Calculator =====\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Modulus (%)\n";
    cout << "6. Power (^)\n";
    cout << "7. Square Root (√)\n";
    cout << "8. Factorial (!)\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:  // Addition
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 2:  // Subtraction
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 3:  // Multiplication
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 4:  // Division
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error! Division by zero is not allowed.\n";
            }
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 5:  // Modulus (only for integers)
            int int1, int2;
            cout << "Enter two integers: ";
            cin >> int1 >> int2;
            if (int2 != 0) {
                cout << "Result: " << (int1 % int2) << endl;
            } else {
                cout << "Error! Modulus by zero is not allowed.\n";
            }
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 6:  // Power
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 7:  // Square Root
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                result = sqrt(num1);
                cout << "Square Root: " << result << endl;
            } else {
                cout << "Error! Cannot find the square root of a negative number.\n";
            }
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 8:  // Factorial
            
            cout << "Enter a positive integer: ";
            cin >> n;
            if (n < 0) {
                cout << "Error! Factorial of a negative number doesn't exist.\n";
            } else {
                fact=1;
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                cout << "Factorial: " << fact << endl;
            }
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
            break;

        case 9:  // Exit
            cout << "Exiting the program. Thank you!\n";
            break;

        default:
            cout << "Invalid choice! Please select a valid option.\n";
            cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
    }
} while(choice!=9);
    return 0;
}
