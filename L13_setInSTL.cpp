#include <iostream>
#include <set>

int main() {
    // 1. Basic Set Operations
    std::cout << "Basic Set Operations:\n";
    std::set<int> s; // Create a set of integers

    // Insert elements into the set
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10); // Duplicate element; will not be added

    // Display elements of the set
    std::cout << "Set elements (sorted order):\n";
    for (const auto& elem : s) {
        std::cout << elem << " "; // Output: 10 20 30
    }
    std::cout << std::endl;

    // Size of the set
    std::cout << "Set size: " << s.size() << std::endl; // Output: 3

    // Find an element in the set
    std::cout << "Finding element 20: " << (s.find(20) != s.end() ? "Found" : "Not Found") << std::endl;

    // Deleting an element
    s.erase(20);
    std::cout << "Set elements after erasing 20:\n";
    for (const auto& elem : s) {
        std::cout << elem << " "; // Output: 10 30
    }
    std::cout << std::endl;

    // 2. Using Custom Comparator
    std::cout << "\nUsing Custom Comparator:\n";
    struct CompareDescending {
        bool operator()(int a, int b) const {
            return a > b; // Custom comparator for descending order
        }
    };

    std::set<int, CompareDescending> descSet; // Create a set with custom comparator

    // Insert elements into the descending set
    descSet.insert(10);
    descSet.insert(20);
    descSet.insert(30);

    // Display elements of the descending set
    std::cout << "Descending order set elements:\n";
    for (const auto& elem : descSet) {
        std::cout << elem << " "; // Output: 30 20 10
    }
    std::cout << std::endl;

    // 3. Set Operations: Empty and Clear
    std::cout << "\nChecking if Set is Empty:\n";
    std::set<int> emptySet;
    std::cout << "Is the set empty? " << (emptySet.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // Adding elements to the set
    emptySet.insert(1);
    emptySet.insert(2);
    std::cout << "Is the set empty now? " << (emptySet.empty() ? "Yes" : "No") << std::endl; // Output: No

    // Clearing the set
    emptySet.clear();
    std::cout << "Set size after clearing: " << emptySet.size() << std::endl; // Output: 0

    return 0;
}
