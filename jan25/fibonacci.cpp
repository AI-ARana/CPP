// Write a C++ program to print the Fibonacci series up to n terms using a for loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    long long first = 0, second = 1, next;
    cout << "Fibonacci Series: " << first << " " << second << " ";

    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
