#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() const {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the sound function
    void sound() const override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the sound function
    void sound() const override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Create instances of the derived classes
    Dog dog;
    Cat cat;

    // Call the sound function on objects of the base class
    // The actual implementation called depends on the type of the object
    Animal *animal1 = &dog;
    Animal *animal2 = &cat;

    animal1->sound(); // Output will be "Dog barks"
    animal2->sound(); // Output will be "Cat meows"

    return 0;
}
