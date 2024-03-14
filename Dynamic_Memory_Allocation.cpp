/*In C++, int* age; declares a pointer to an integer, but it does not initialize it. 
This means that age will contain some arbitrary memory address until it's assigned 
a valid memory address, typically through dynamic memory allocation or by pointing 
it to the address of an existing integer variable.*/

#include <iostream>

int main() {
    int actualAge = 25; // An integer variable storing the age
    int* age; // Declaring a pointer to an integer
    
    age = &actualAge; // Assigning the address of actualAge to age
    
    // Printing the value of actualAge using age
    std::cout << "Age: " << *age << std::endl;

    return 0;
}
