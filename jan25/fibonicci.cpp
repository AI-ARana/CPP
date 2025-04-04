#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0, b = 1, c = 0;
    int closest = a;
    int target;

    system("cls");

    cout << "Enter the target value: ";
    cin >> target;

    int min_diff = abs(target - a);  

    //find the number closest to target
    while (c <= 100) {
        c = a + b;
        if (abs(target - c) < min_diff && c <= 100) {
            min_diff = abs(target - c);
            closest = c;
        }
        a = b;
        b = c;
    }

    // print from closest to 100
    a = 0;
    b = 1;
    c = 0;
    bool start_printing = false;

    cout << "Fibonacci numbers from closest to target (i.e., " << closest << ") up to 100:\n";

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
