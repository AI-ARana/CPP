#include <iostream>

// Abstract class definition
class Animal {
public:
    virtual void speak() const = 0; // Pure virtual function
};

// Concrete subclass Dog
class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

// Concrete subclass Cat
class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};

// Function definition
int add(int x, int y) {
    return x + y;
}

int main() {
    // Example usage of abstract class and functions
    Dog dog;
    Cat cat;

    dog.speak(); // Output: Woof!
    cat.speak(); // Output: Meow!

    int result = add(3, 5);
    std::cout << "Result of addition: " << result << std::endl; // Output: Result of addition: 8

    return 0;
}
