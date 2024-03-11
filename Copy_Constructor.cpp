#include <bits/stdc++.h>
using namespace std;
class Student {
  
    public:
    
    string name;
    int roll_no;
    int marks;
    
    Student() {
        cout<<"Student Class Default Constructor\n";
    }
    
    Student(string name,int roll_no, int marks) { // Parameterize Constructor
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
    
    Student(Student &other) {   // Copy Constructor
        this->name = other.name;
        this->roll_no = other.roll_no;
        this->marks = other.marks;
    }
    
    void setValue(string name,int roll_no, int marks) {
        this->name = name;
        this->roll_no = roll_no;
        this-> marks = marks;
    }
    
    void printValue() {
        cout<<"My name is "<<name<<" and my roll number is "<<roll_no<<". I got "<<marks<<" marks out of 100\n";
    }
    
};

int main() {
    
    //parameterized constructor is being called
    Student s1("Anurag",29,95);
    s1.printValue();
    
  //copy constructor is being called
    Student s2(s1);
    s2.printValue();
}