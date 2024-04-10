/* Containers: These are classes that hold collections of objects. 
The main container types are vectors, lists, sets, maps, queues, and stacks. 
Containers provide various operations such as insertion, deletion, and iteration. */

#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
#include <queue>
#include <stack>


int main() {
    // Creating a vector to store integers
    std::vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Accessing elements of the vector using index
    std::cout << "Vector elements: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

// List :  Lists provide a doubly-linked list
std::list<int> myList;

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Displaying the elements of the list
    std::cout << "List elements: ";
    for (int num : myList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

// Set: sets maintain a sorted set of unique elements

 std::set<int> mySet;

    // Adding elements to the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Displaying the elements of the set
    std::cout << "Set elements: ";
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

// Maps: maps store key-value pairs

std::map<std::string, int> myMap;

    // Adding elements to the map
    myMap["one"] = 1;
    myMap["two"] = 2;
    myMap["three"] = 3;

    // Displaying the elements of the map
    std::cout << "Map elements: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

//Queues:queues are FIFO (First In, First Out) data structures
    std::queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Displaying the elements of the queue
    std::cout << "Queue elements: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

// Stacks:stacks are LIFO (Last In, First Out) data structures
std::stack<int> myStack;

    // Adding elements to the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Displaying the elements of the stack
    std::cout << "Stack elements: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;



    return 0;
}
