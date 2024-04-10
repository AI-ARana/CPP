/* To perform file operations, you first need to open a file.
 You can open a file for reading (ifstream), writing (ofstream), 
 or both reading and writing (fstream). */

 #include <fstream>

int main() {
    // Opening a file for writing
    std::ofstream outFile("example.txt");
    if (!outFile.is_open()) {
        // Handle error if file couldn't be opened
        return 1;
    }

    // Write data to the file
    outFile << "Hello, World!\n";

    // Close the file
    outFile.close();
    
    return 0;
}
