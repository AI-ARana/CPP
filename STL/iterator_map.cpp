// Iterator for map
#include <iostream>
#include <map>

int main() {
    // Creating a map of integer keys and string values
    std::map<int, std::string> myMap;

    // Adding elements to the map
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    // Using iterators to traverse through the map
    std::cout << "Map elements using iterators: ";
    for (std::map<int, std::string>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }
    std::cout << std::endl;

    return 0;
}
