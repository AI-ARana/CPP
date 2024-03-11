/*insert() function is used to do the insertion at any specific position in the list. 
This function insert(pos_iterator, num_elements, element) takes 3 arguments position,
 number of elements to insert and the element to insert.*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Declare a list of integers
    list<int> list1;
    
    // Initialize iterator for loop iteration
    int i;
    
    // Assign 5 elements with value 2 to the list
    list1.assign(5, 2);
    
    // Initialize iterator 'it' and move it 2 positions ahead
    list<int>::iterator it = list1.begin();
    advance(it, 2);
    
    // Insert element 3 at the position pointed by iterator 'it'
    list1.insert(it, 3);

    // Output the elements of the list after the first insertion
    for (list<int>::iterator i = list1.begin(); i != list1.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    
    // Reassign iterator 'it' to the beginning of the list and move it 2 positions ahead again
    it = list1.begin();
    advance(it, 2);
    
    // Insert 2 elements with value 4 at the position pointed by iterator 'it'
    list1.insert(it, 2, 4);
    
    // Output the elements of the list after the second insertion
    for (list<int>::iterator i = list1.begin(); i != list1.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}
