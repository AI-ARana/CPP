#include<iostream>
using namespace std;
// base class
class A {
    public:
    A() {
         cout << "This is A" << endl;
        }
  };
//base class 
class B {
    public:
    B() {
         cout<<"This is B " <<endl;
         }
};
// first sub class
class C: public A {
};
// second sub class
class D: public A, public B {
};
// main function   
int main() {  
// creating object of sub class will invoke the constructor of base //class
 D d;
 return 0;
}