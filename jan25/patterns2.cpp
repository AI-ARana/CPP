// Write a C++ program to print a pyramid pattern. 
// For input 5, the output should be:

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    system("cls");

    for (int i = 1; i <= rows; i++) {
        // leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // stars and a space after each star
        for (int k = 1; k <= i; k++) {
            cout <<"* ";
        }
        cout << endl;
    }
    // Write a C++ program to print a diamond pattern using stars. 
    // For input 5, the output should be:

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    cout<<endl;
    // Upper half of diamond
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    // Lower half of diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


