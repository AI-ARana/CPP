#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "\nDemonstrating Operator Precedence:\n";
    
    // Case 1: Multiplication before Addition
    cout << "a + b * c = " << (a + b * c) << " (Multiplication has higher precedence)\n";
    
    // Case 2: Parentheses change precedence
    cout << "(a + b) * c = " << ((a + b) * c) << " (Parentheses force addition first)\n";
    
    // Case 3: Division and Multiplication
    cout << "a + b / c * 2 = " << (a + b / c * 2) << " (Division and Multiplication evaluated left to right)\n";
    
    // Case 4: Modulus and Addition
    cout << "a % b + c = " << (a % b + c) << " (Modulus before addition)\n";
    
    // Case 5: Logical AND and OR
    cout << "(a > b && b < c) = " << ((a > b && b < c)) << " (AND before OR)\n";
    cout << "(a > b || b < c) = " << ((a > b || b < c)) << " (OR has lower precedence than AND)\n";
    
    return 0;
}
