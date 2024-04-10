/* Exception Hnadling
try catch block */

#include <iostream>

int main() {
    try {
        // Code that may throw an exception
        int x = 10;
        int y = 0;
        if (y == 0) {
            throw std::runtime_error("Division by zero error");
        }
        int result = x / y;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        // Exception handling code
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
