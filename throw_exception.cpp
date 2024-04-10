/* Throw Exception*/
#include <iostream>
#include <stdexcept>

int main() {
    try {
        int x = 10;
        int y = 0;
        if (y == 0) {
            throw std::runtime_error("Division by zero error");
        }
        int result = x / y;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
