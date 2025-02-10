#include <iostream>
using namespace std;

int main() {
    int a, b;
    system("cls");
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;
    
    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    
    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > 0 && b > 0): " << ((a > 0) && (b > 0)) << endl;
    cout << "(a > 0 || b > 0): " << ((a > 0) || (b > 0)) << endl;
    cout << "!(a == b): " << !(a == b) << endl;
    
    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a << 1: " << (a << 1) << endl;
    cout << "b >> 1: " << (b >> 1) << endl;
    
    // Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    int x = a;
    cout << "x = " << x << endl;
    x += b;
    cout << "x += b: " << x << endl;
    x -= b;
    cout << "x -= b: " << x << endl;
    x *= b;
    cout << "x *= b: " << x << endl;
    x /= b;
    cout << "x /= b: " << x << endl;
    x %= b;
    cout << "x %= b: " << x << endl;
    
    // Ternary Operator
    cout << "\nTernary Operator:" << endl;
    int minVal = (a < b) ? a : b;
    cout << "Minimum Value: " << minVal << endl;
    
    // Increment/Decrement Operators
    cout << "\nIncrement/Decrement Operators:" << endl;
    cout << "++a: " << (++a) << endl;
    cout << "b++: " << (b++) << " (Post-increment)" << endl;
    cout << "b after post-increment: " << b << endl;
    cout << "--a: " << (--a) << endl;
    cout << "b--: " << (b--) << " (Post-decrement)" << endl;
    cout << "b after post-decrement: " << b << endl;
    
    // sizeof Operator
    cout << "\nsizeof Operator:" << endl;
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;
    cout << "Size of b: " << sizeof(b) << " bytes" << endl;
    
    // Type Casting Operator
    cout << "\nType Casting Operator:" << endl;
    double castedVal = (double)a / b;
    cout << "Casted division result (double): " << castedVal << endl;
    
    return 0;
}
