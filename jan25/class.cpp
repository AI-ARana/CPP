#include <iostream>
using namespace std;

// Define a class named Student
class Student {
public:
    // Attributes (Data Members)
    string name;
    int rollNumber;
    float marks;

    // Method to display student details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create an object of Student
    Student student1;

    // Assign values to the object's attributes
    student1.name = "Anurag Rana";
    student1.rollNumber = 101;
    student1.marks = 88.5;

    // Call the display method
    student1.display();

    return 0;
}
