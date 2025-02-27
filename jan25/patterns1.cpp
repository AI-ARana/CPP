// Write a C++ program to print a right-angled triangle pattern of stars (*). 
// For example, if the input is 5, the output should be:
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    system("cls");

    for (int i = 1; i <= rows; i++) {
        // i stars on the ith row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout<<endl;
    // Write a C++ program to print an inverted right-angled triangle pattern of stars. 
    // For input 5, the output should be:
    // *****
    // ****
    // ***
    // **
    // *

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
