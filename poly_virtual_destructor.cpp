/*Create a hierarchy of classes with inheritance and use virtual destructors 
to ensure that destructors of derived classes are called properly 
when deleting objects through a base class pointer.*/
#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor\n";
    }
};

int main() {
    Base* b = new Derived();
    delete b; // Calls Derived destructor via virtual destructor in Base
    return 0;
}
