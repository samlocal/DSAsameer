#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    // 1. Basic Unordered Set Operations
    std::cout << "Basic Unordered Set Operations:\n";
    std::unordered_set<int> us; // Create an unordered set of integers

    // Insert elements into the unordered set
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // Duplicate element; will not be added

    // Display elements of the unordered set
    std::cout << "Unordered set elements:\n";
    for (const auto& elem : us) {
        std::cout << elem << " "; // Output order may vary
    }
    std::cout << std::endl;

    // Count occurrences of an element
    std::cout << "Number of occurrences of 10: " << us.count(10) << std::endl; // Output: 1

    // Find and display elements
    auto it = us.find(20);
    if (it != us.end()) {
        std::cout << "Element 20 found.\n";
    }

    // Deleting elements
    us.erase(20);
    std::cout << "Unordered set elements after erasing 20:\n";
    for (const auto& elem : us) {
        std::cout << elem << " "; // Output order may vary
    }
    std::cout << std::endl;

    // 2. Using Custom Hash Function and Equality Predicate
    std::cout << "\nUsing Custom Hash Function and Equality Predicate:\n";
    struct CustomHash {
        std::size_t operator()(const std::string& s) const {
            return std::hash<std::string>{}(s) ^ 0x5bd1e995; // Custom hash function
        }
    };

    struct CustomEqual {
        bool operator()(const std::string& a, const std::string& b) const {
            return a.size() == b.size(); // Custom equality predicate
        }
    };

    std::unordered_set<std::string, CustomHash, CustomEqual> customSet;

    // Insert elements into the custom unordered set
    customSet.insert("apple");
    customSet.insert("banana");
    customSet.insert("cherry");
    customSet.insert("date");

    // Display elements of the custom unordered set
    std::cout << "Custom unordered set elements:\n";
    for (const auto& elem : customSet) {
        std::cout << elem << " "; // Output order may vary
    }
    std::cout << std::endl;

    // 3. Unordered Set Operations: Empty and Clear
    std::cout << "\nChecking if Unordered Set is Empty:\n";
    std::unordered_set<int> emptySet;
    std::cout << "Is the unordered set empty? " << (emptySet.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // Adding elements to the unordered set
    emptySet.insert(1);
    emptySet.insert(2);
    std::cout << "Is the unordered set empty now? " << (emptySet.empty() ? "Yes" : "No") << std::endl; // Output: No

    // Clearing the unordered set
    emptySet.clear();
    std::cout << "Unordered set size after clearing: " << emptySet.size() << std::endl; // Output: 0

    return 0;
}
