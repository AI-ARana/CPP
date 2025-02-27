// Calculate LCM and GCD
#include <iostream>
using namespace std;
// int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    // cout << "GCD: " << gcd(a, b) << "\nLCM: " << lcm(a, b) << endl;
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b) / gcd;
    
    cout << "GCD: " << gcd << "\nLCM: " << lcm << endl;
    return 0;
}