#include <iostream>
using namespace std;

// Arithmetic operators
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return static_cast<float>(a) / b;
    else {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
}

// Assignment operators
void assign(int& a, int b) {
    a = b;
}

void plusEquals(int& a, int b) {
    a += b;
}

void minusEquals(int& a, int b) {
    a -= b;
}

void timesEquals(int& a, int b) {
    a *= b;
}

void divideEquals(int& a, int b) {
    if (b != 0)
        a /= b;
    else
        cout << "Error: Division by zero" << endl;
}

// Comparison operators
bool isEqual(int a, int b) {
    return a == b;
}

bool isNotEqual(int a, int b) {
    return a != b;
}

bool isLessThan(int a, int b) {
    return a < b;
}

bool isGreaterThan(int a, int b) {
    return a > b;
}

bool isLessThanOrEqual(int a, int b) {
    return a <= b;
}

bool isGreaterThanOrEqual(int a, int b) {
    return a >= b;
}

// Logical operators
bool logicalAnd(int a, int b) {
    return a && b;
}

bool logicalOr(int a, int b) {
    return a || b;
}

bool logicalNot(int a) {
    return !a;
}

// Increment and decrement operators
void preIncrement(int& a) {
    ++a;
}

int postIncrement(int& a) {
    return a++;
}

void preDecrement(int& a) {
    --a;
}

int postDecrement(int& a) {
    return a--;
}

int main() {
    int a = 5, b = 3;
    int c;
    system("cls");

    // Arithmetic operators
    c = add(a, b);
    cout << "a + b = " << c << endl;

    c = subtract(a, b);
    cout << "a - b = " << c << endl;

    c = multiply(a, b);
    cout << "a * b = " << c << endl;

    float result = divide(a, b);
    cout << "a / b = " << result << endl;

    // Assignment operators
    assign(c, a);
    cout << "c = a, c = " << c << endl;

    plusEquals(c, b);
    cout << "c += b, c = " << c << endl;

    minusEquals(c, b);
    cout << "c -= b, c = " << c << endl;

    timesEquals(c, b);
    cout << "c *= b, c = " << c << endl;

    divideEquals(c, b);
    cout << "c /= b, c = " << c << endl;

    // Comparison operators
    cout << "a == b is " << isEqual(a, b) << endl;
    cout << "a != b is " << isNotEqual(a, b) << endl;
    cout << "a < b is " << isLessThan(a, b) << endl;
    cout << "a > b is " << isGreaterThan(a, b) << endl;
    cout << "a <= b is " << isLessThanOrEqual(a, b) << endl;
    cout << "a >= b is " << isGreaterThanOrEqual(a, b) << endl;

    // Logical operators
    cout << "Logical AND of a and b is " << logicalAnd(a, b) << endl;
    cout << "Logical OR of a and b is " << logicalOr(a, b) << endl;
    cout << "Logical NOT of a is " << logicalNot(a) << endl;

    // Increment and decrement operators
    cout << "a before increment: " << a << endl;
    preIncrement(a);
    cout << "a after pre-increment: " << a << endl;
    cout << "a after post-increment: " << postIncrement(a) << endl;
    cout << "a after two increments: " << a << endl;

    cout << "b before decrement: " << b << endl;
    preDecrement(b);
    cout << "b after pre-decrement: " << b << endl;
    cout << "b after post-decrement: " << postDecrement(b) << endl;
    cout << "b after two decrements: " << b << endl;

    return 0;
}
