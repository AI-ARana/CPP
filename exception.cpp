/* A std::runtime_error is thrown explicitly with a descriptive message.
An std::out_of_range exception is thrown implicitly when trying to access 
an out-of-range index of a std::string.
A custom exception MyException is thrown and caught. 
This custom exception class is derived from std::exception, 
and it overrides the what() method to provide a custom error message.*/

#include <iostream>
#include <stdexcept>

// Custom exception class derived from std::exception
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception: Something went wrong!";
    }
};

int main() {
    try {
        // Throwing std::runtime_error
        throw std::runtime_error("This is a runtime error");
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught std::runtime_error: " << e.what() << std::endl;
    }

    try {
        // Throwing std::out_of_range
        std::string str = "Hello";
        char ch = str.at(10); // Accessing an out-of-range index
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught std::out_of_range: " << e.what() << std::endl;
    }

    try {
        // Throwing custom exception
        throw MyException();
    } catch (const MyException& e) {
        std::cerr << "Caught MyException: " << e.what() << std::endl;
    }

    return 0;
}
