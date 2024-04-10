#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Opening a file for reading
    std::ifstream inFile("example.txt");
    if (!inFile.is_open()) {
        // Handle error if file couldn't be opened
        return 1;
    }

    // Reading data from the file
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    
    // Close the file
    inFile.close();
    
    return 0;
}
