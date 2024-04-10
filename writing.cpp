#include <fstream>

int main() {
    // Opening a file for writing
    std::ofstream outFile("example.txt");
    if (!outFile.is_open()) {
        // Handle error if file couldn't be opened
        return 1;
    }

    // Writing data to the file
    outFile << "Hello, World!\n";
    outFile << 12345 << '\n';
    
    // Close the file
    outFile.close();
    
    return 0;
}
