#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Read from a file
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error: Cannot open input file." << endl;
        return 1;
    }
    
    string line;
    cout << "Contents of input.txt:" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();

    // Write to a file
    ofstream outputFile("output.txt");
    if (!outputFile) {
        cerr << "Error: Cannot open output file." << endl;
        return 1;
    }
    
    outputFile << "This is a line written to output.txt." << endl;
    outputFile.close();
    cout << "Data written to output.txt successfully." << endl;

    // Update a file
    fstream updateFile("update.txt", ios::in | ios::out);
    if (!updateFile) {
        cerr << "Error: Cannot open update file." << endl;
        return 1;
    }
    
    // Move the file pointer to the beginning
    updateFile.seekp(0, ios::beg);
    updateFile << "This line has been updated." << endl;
    updateFile.close();
    cout << "Data updated in update.txt successfully." << endl;

    return 0;
}
