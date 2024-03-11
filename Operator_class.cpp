#include <iostream>
using namespace std;

class OperatorsDemo {
private:
    int value;

public:
    // Constructor
    OperatorsDemo(int val) : value(val) {}

    // Arithmetic operators
    OperatorsDemo operator+(const OperatorsDemo& other) const {
        return OperatorsDemo(value + other.value);
    }
    OperatorsDemo operator-(const OperatorsDemo& other) const {
        return OperatorsDemo(value - other.value);
    }
    OperatorsDemo operator*(const OperatorsDemo& other) const {
        return OperatorsDemo(value * other.value);
    }
    OperatorsDemo operator/(const OperatorsDemo& other) const {
        if (other.value != 0)
            return OperatorsDemo(value / other.value);
        else {
            cout << "Error: Division by zero" << endl;
            return *this;
        }
    }

    // Assignment operators
    OperatorsDemo& operator=(const OperatorsDemo& other) {
        value = other.value;
        return *this;
    }
    OperatorsDemo& operator+=(const OperatorsDemo& other) {
        value += other.value;
        return *this;
    }
    OperatorsDemo& operator-=(const OperatorsDemo& other) {
        value -= other.value;
        return *this;
    }
    OperatorsDemo& operator*=(const OperatorsDemo& other) {
        value *= other.value;
        return *this;
    }
    OperatorsDemo& operator/=(const OperatorsDemo& other) {
        if (other.value != 0)
            value /= other.value;
        else
            cout << "Error: Division by zero" << endl;
        return *this;
    }

    // Comparison operators
    bool operator==(const OperatorsDemo& other) const {
        return value == other.value;
    }
    bool operator!=(const OperatorsDemo& other) const {
        return value != other.value;
    }
    bool operator<(const OperatorsDemo& other) const {
        return value < other.value;
    }
    bool operator>(const OperatorsDemo& other) const {
        return value > other.value;
    }
    bool operator<=(const OperatorsDemo& other) const {
        return value <= other.value;
    }
    bool operator>=(const OperatorsDemo& other) const {
        return value >= other.value;
    }

    // Logical operators
    bool operator&&(const OperatorsDemo& other) const {
        return value && other.value;
    }
    bool operator||(const OperatorsDemo& other) const {
        return value || other.value;
    }
    bool operator!() const {
        return !value;
    }

    // Increment and decrement operators
    OperatorsDemo& operator++() {
        ++value;
        return *this;
    }
    OperatorsDemo operator++(int) {
        OperatorsDemo temp = *this;
        ++(*this);
        return temp;
    }
    OperatorsDemo& operator--() {
        --value;
        return *this;
    }
    OperatorsDemo operator--(int) {
        OperatorsDemo temp = *this;
        --(*this);
        return temp;
    }

    // Getter method
    int getValue() const {
        return value;
    }
};

int main() {
    OperatorsDemo a(5), b(3);
    
    // Arithmetic operators
    OperatorsDemo c = a + b;
    cout << "a + b = " << c.getValue() << endl;

    c = a - b;
    cout << "a - b = " << c.getValue() << endl;

    c = a * b;
    cout << "a * b = " << c.getValue() << endl;

    c = a / b;
    cout << "a / b = " << c.getValue() << endl;

    // Assignment operators
    c = a;
    cout << "c = a, c = " << c.getValue() << endl;

    c += b;
    cout << "c += b, c = " << c.getValue() << endl;

    c -= b;
    cout << "c -= b, c = " << c.getValue() << endl;

    c *= b;
    cout << "c *= b, c = " << c.getValue() << endl;

    c /= b;
    cout << "c /= b, c = " << c.getValue() << endl;

    // Comparison operators
    cout << "a == b is " << (a == b) << endl;
    cout << "a != b is " << (a != b) << endl;
    cout << "a < b is " << (a < b) << endl;
    cout << "a > b is " << (a > b) << endl;
    cout << "a <= b is " << (a <= b) << endl;
    cout << "a >= b is " << (a >= b) << endl;

    // Logical operators
    cout << "Logical AND of a and b is " << (a && b) << endl;
    cout << "Logical OR of a and b is " << (a || b) << endl;
    cout << "Logical NOT of a is " << !a << endl;

    // Increment and decrement operators
    cout << "a before increment: " << a.getValue() << endl;
    cout << "a after pre-increment: " << (++a).getValue() << endl;
    cout << "a after post-increment: " << (a++).getValue() << endl;
    cout << "a after two increments: " << a.getValue() << endl;

    cout << "b before decrement: " << b.getValue() << endl;
    cout << "b after pre-decrement: " << (--b).getValue() << endl;
    cout << "b after post-decrement: " << (b--).getValue() << endl;
    cout << "b after two decrements: " << b.getValue() << endl;

    return 0;
}
