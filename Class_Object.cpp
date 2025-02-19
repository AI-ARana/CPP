#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
class Student {  // Class Student
    public:     // Access Specifiers
    string name;    // String Data Type
    int roll_no;
    int marks;
    void set_data(string name,int roll_no, int marks) { // Function to take input
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
        void print_data() {         // Function to print
        cout<<"My name is "<<name<<" and my roll number is "<<roll_no<<". I got "<<marks<<" marks out of 100\n";
    }
    
};
int main() {
    // s1 is an object of class Student
    Student s1;
    system("cls");
    s1.set_data("Anurag",29,95);
    s1.print_data();
}