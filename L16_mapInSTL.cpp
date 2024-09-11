#include <iostream>
#include <map>
#include <string>

int main() {
    // 1. Basic Map Operations
    std::cout << "Basic Map Operations:\n";
    std::map<int, std::string> myMap; // Create a map with int keys and string values

    // Insert key-value pairs into the map
    myMap.insert({1, "Apple"});
    myMap.insert({2, "Banana"});
    myMap.insert({3, "Cherry"});
    myMap[4] = "Date"; // Insert using operator[]

    // Display elements of the map
    std::cout << "Map elements (sorted by key):\n";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find and display a value
    auto it = myMap.find(2);
    if (it != myMap.end()) {
        std::cout << "Found key 2 with value: " << it->second << std::endl;
    }

    // Accessing value with operator[]
    std::cout << "Value associated with key 3: " << myMap[3] << std::endl;

    // Deleting an element
    myMap.erase(2); // Removes the key-value pair with key 2
    std::cout << "Map elements after erasing key 2:\n";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 2. Using Custom Comparator
    std::cout << "\nUsing Custom Comparator:\n";
    struct CustomCompare {
        bool operator()(int a, int b) const {
            return a > b; // Custom comparator for descending order
        }
    };

    std::map<int, std::string, CustomCompare> customMap; // Create a map with custom comparator

    // Insert key-value pairs into the custom map
    customMap.insert({1, "Apple"});
    customMap.insert({2, "Banana"});
    customMap.insert({3, "Cherry"});

    // Display elements of the custom map
    std::cout << "Custom map elements (sorted by key, descending):\n";
    for (const auto& pair : customMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 3. Map Operations: Empty and Clear
    std::cout << "\nChecking if Map is Empty:\n";
    std::map<int, std::string> emptyMap;
    std::cout << "Is the map empty? " << (emptyMap.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // Adding elements to the map
    emptyMap.insert({1, "One"});
    emptyMap.insert({2, "Two"});
    std::cout << "Is the map empty now? " << (emptyMap.empty() ? "Yes" : "No") << std::endl; // Output: No

    // Clearing the map
    emptyMap.clear();
    std::cout << "Map size after clearing: " << emptyMap.size() << std::endl; // Output: 0

    return 0;
}
