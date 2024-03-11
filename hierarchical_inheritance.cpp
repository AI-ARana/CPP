#include<iostream>
using namespace std;
// base class 
class A { 
    public: 
    A() { 
       cout<<"This is A’s constructor"<< endl; 
    } 
}; 
// first sub class 
class B: public A { }; 
// second sub class 
class C: public A { }; 
// main function 
int main() {    
    /* creating object of sub class will invoke the constructor of base class */
  B obj1;
  C obj2;
 return 0; 
} 