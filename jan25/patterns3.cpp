// Write a C++ program to print a palindromic number pyramid. 
// For input 5, the output should be:

//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include <iostream>
using namespace std;

// int main() {
//     int rows;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     system("cls");

//     for (int i = 1; i <= rows; i++) {
//         // leading spaces
//         for (int j = 1; j <= rows - i; j++) {
//             cout << "  "; // two spaces for alignment
//         }
//         // decreasing numbers
//         for (int j = i; j >= 1; j--) {
//             cout << j << " ";
//         }
//         // increasing numbers starting from 2
//         for (int j = 2; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Pattern Printing
int main() {
    int n = 3;
    int a=1;
    for (int i = 1; i <= n; i++) {
        // leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // stars and a space after each star
        for (int k = 1; k <= i; k++) {
            cout <<a<<" ";
            a++;
        }
        cout << endl;
    }
    return 0;
}
