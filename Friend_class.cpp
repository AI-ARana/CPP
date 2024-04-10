/* The friend keyword allows a class or function to access 
the private and protected members of another class. 
This concept is often used in situations where certain functionalities 
require access to private or protected members of a class but aren't part
 of that class itself or its inheritance hierarchy.*/

 #include <iostream>

// Forward declaration of class B
class B;

// Class A
class A {
private:
    int privateA;

    // Declare class B as a friend of class A
    friend class B;

public:
    A(int value) : privateA(value) {}

    void display() {
        std::cout << "Private A: " << privateA << std::endl;
    }
};

// Class B
class B {
private:
    int privateB;

public:
    B(int value) : privateB(value) {}

    void manipulateA(A& obj) {
        // Access private member of class A
        obj.privateA = privateB;
    }
};

int main() {
    A objA(5);
    B objB(10);

    objA.display(); // Output: Private A: 5
    objB.manipulateA(objA);
    objA.display(); // Output: Private A: 10 (Changed by class B)

    return 0;
}
