/* Iterator in STL for Container objects*/
#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
#include <queue>
#include <stack>

int main() {
    // Creating a vector of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::set<int> n1= {20,13,12,78};
    std::list<int> n2= {10,50,60};
    
    // Using iterators to traverse through the vector
    std::cout << "Vector elements using iterators: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

std::cout << "Set elements using iterators: ";
    for (std::set<int>::iterator it1 = n1.begin(); it1 != n1.end(); ++it1) {
        std::cout << *it1 << " ";
    }
    std::cout << std::endl;
    std::cout << "List elements using iterators: ";
    for (std::list<int>::iterator it2 = n2.begin(); it2 != n2.end(); ++it2) {
        std::cout << *it2 << " ";
    }
    std::cout << std::endl;
    return 0;
}
