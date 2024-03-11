#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Student {
  
    public:
    
    string name;
    int roll_no;
    int marks;
    
    Student() {         //Default Costructor
        cout<<"Here is Student Class Default Constructor\n";
    }
    
    void set_data(string name,int roll_no, int marks) {
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
    
    void print_data() {
        cout<<"My name is "<<name<<" and my roll number is "<<roll_no<<". I got "<<marks<<" marks out of 100\n";
    }
    
};

int main() {
    
    Student s1; //constructor will be called automatically because a new object is created.
    s1.set_data("Anurag",29,95);
    s1.print_data();
}