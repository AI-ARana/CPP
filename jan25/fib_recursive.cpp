#include <iostream>
#include <cmath>
#include <climits> // for INT_MAX
using namespace std;

int main() {
    int a = 0, b = 1, c = 0;
    int closest = a;
    int target;
    system("cls");
    cout << "Enter the target value: ";
    cin >> target;

    
    int min_diff = abs(target - a);

    // First pass: find the closest Fibonacci number to target
    while (c <= 100) {
        c = a + b;
        int diff = abs(target - c);
        if (diff < min_diff && c <= 100) {
            min_diff = diff;
            closest = c;
        }
        a = b;
        b = c;
    }

    // print from closest to 100
    cout << "Fibonacci numbers from closest to target (i.e., " << closest << ") up to 100:\n";
    a = 0;
    b = 1;
    c = 0;
    bool start_printing = false;

    while (a <= 100) {
        if (a == closest)
            start_printing = true;
        if (start_printing)
            cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
