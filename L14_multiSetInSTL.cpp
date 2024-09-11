#include <iostream>
#include <set>

int main() {
    // 1. Basic Multiset Operations
    std::cout << "Basic Multiset Operations:\n";
    std::multiset<int> ms; // Create a multiset of integers

    // Insert elements into the multiset
    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // Duplicate element
    ms.insert(30);
    ms.insert(10); // Another duplicate element

    // Display elements of the multiset
    std::cout << "Multiset elements (sorted order with duplicates):\n";
    for (const auto& elem : ms) {
        std::cout << elem << " "; // Output: 10 10 10 20 30
    }
    std::cout << std::endl;

    // Count occurrences of an element
    std::cout << "Number of occurrences of 10: " << ms.count(10) << std::endl; // Output: 3

    // Find and display elements
    auto it = ms.find(20);
    if (it != ms.end()) {
        std::cout << "Element 20 found.\n";
    }

    // Deleting elements
    ms.erase(10); // Removes all instances of 10
    std::cout << "Multiset elements after erasing 10:\n";
    for (const auto& elem : ms) {
        std::cout << elem << " "; // Output: 20 30
    }
    std::cout << std::endl;

    // 2. Using Custom Comparator
    std::cout << "\nUsing Custom Comparator:\n";
    struct CompareDescending {
        bool operator()(int a, int b) const {
            return a > b; // Custom comparator for descending order
        }
    };

    std::multiset<int, CompareDescending> descMultiset; // Create a multiset with custom comparator

    // Insert elements into the descending multiset
    descMultiset.insert(10);
    descMultiset.insert(20);
    descMultiset.insert(30);

    // Display elements of the descending multiset
    std::cout << "Descending order multiset elements:\n";
    for (const auto& elem : descMultiset) {
        std::cout << elem << " "; // Output: 30 20 10
    }
    std::cout << std::endl;

    // 3. Multiset Operations: Empty and Clear
    std::cout << "\nChecking if Multiset is Empty:\n";
    std::multiset<int> emptyMultiset;
    std::cout << "Is the multiset empty? " << (emptyMultiset.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // Adding elements to the multiset
    emptyMultiset.insert(1);
    emptyMultiset.insert(2);
    std::cout << "Is the multiset empty now? " << (emptyMultiset.empty() ? "Yes" : "No") << std::endl; // Output: No

    // Clearing the multiset
    emptyMultiset.clear();
    std::cout << "Multiset size after clearing: " << emptyMultiset.size() << std::endl; // Output: 0

    return 0;
}
