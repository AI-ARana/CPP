/* Case 1: *age and *Employee_age dereference the pointers to get the values they point to, 
and then the assignment copies the value from Employee_age to the 
dynamically allocated memory.
int* age = new int; // Allocate memory for an integer
*age = *Employee_age; // Copy the value pointed to by Employee_age into the dynamically allocated memory

Case 2: Employee_age is directly assigned to *age since Employee_age is an integer variable.
int* age = new int; // Allocate memory for an integer
*age = Employee_age; // Copy the value of Employee_age into the dynamically allocated memory
 */
#include <iostream>

int main() {
    // Case 1: When Employee_age is a pointer to an integer
    int employee_age_value = 30; // Assuming this is the age of the employee
    int* Employee_age = &employee_age_value; // Pointer to the employee's age

    // Allocate memory for an integer
    int* age = new int;

    // Copy the value pointed to by Employee_age into the dynamically allocated memory
    *age = *Employee_age;

    // Output the value stored in the dynamically allocated memory
    std::cout << "Employee's age (case 1): " << *age << std::endl;

    // Deallocate the dynamically allocated memory
    delete age;

    // Case 2: When Employee_age is an integer variable
    int Employee_age_value = 25; // Age of another employee

    // Allocate memory for another integer
    age = new int;

    // Copy the value of Employee_age into the dynamically allocated memory
    *age = Employee_age_value;

    // Output the value stored in the dynamically allocated memory
    std::cout << "Employee's age (case 2): " << *age << std::endl;

    // Deallocate the dynamically allocated memory
    delete age;

    return 0;
}
