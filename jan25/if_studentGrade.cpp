// Project: Student Grade & Scholarship System
// This program takes marks of a student as input and:

// Assigns a grade based on marks.
// Determines scholarship eligibility using different if conditions.


#include <iostream>

using namespace std;

int main() {
    int marks;
    double scholarship = 0.0;
    system("cls");

    // Input marks
    cout << "Enter student marks (0-100): ";
    cin >> marks;

    // Validating marks using simple if
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100.\n";
        return 1; // Exit program
    }

    // Grade calculation using if-else-if ladder
    char grade;
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Student Grade: " << grade << endl;

    // Scholarship eligibility using nested if
    if (marks >= 85) {
        if (marks >= 95) {
            scholarship = 5000;  // High scholarship for top students
        } else {
            scholarship = 3000;  // Moderate scholarship
        }
    } else if (marks >= 75) {
        scholarship = 1500;  // Basic scholarship
    }

    // If-else to check scholarship amount
    if (scholarship > 0) {
        cout << "Congratulations! You are eligible for a scholarship of Rs. " << scholarship << endl;
    } else {
        cout << "Sorry, you are not eligible for a scholarship.\n";
    }

    return 0;
}
