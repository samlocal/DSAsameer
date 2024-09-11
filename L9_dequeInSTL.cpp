#include <iostream>
#include <deque>

int main() {
    // Initialize an empty deque of integers
    std::deque<int> dq;

    // Insert elements
    dq.push_back(10);     // Adds 10 to the end
    dq.push_front(5);     // Adds 5 to the front
    dq.push_back(20);     // Adds 20 to the end
    dq.push_front(1);     // Adds 1 to the front

    // Display elements using a range-based for loop
    std::cout << "Deque elements: ";
    for (auto elem : dq) {
        std::cout << elem << " ";  // Output: 1 5 10 20
    }
    std::cout << std::endl;

    // Access elements
    std::cout << "First element: " << dq.front() << "\n";  // Output: 1
    std::cout << "Last element: " << dq.back() << "\n";   // Output: 20
    std::cout << "Element at index 2: " << dq[2] << "\n"; // Output: 10
    std::cout << "Element at index 2 (at()): " << dq.at(2) << "\n"; // Output: 10

    // Remove elements
    dq.pop_back();   // Removes the last element (20)
    dq.pop_front();  // Removes the first element (1)

    // Display elements after removals
    std::cout << "Deque elements after removals: ";
    for (auto elem : dq) {
        std::cout << elem << " ";  // Output: 5 10
    }
    std::cout << std::endl;

    // Insert at specific positions
    dq.insert(dq.begin() + 1, 15);  // Inserts 15 at index 1

    // Display elements after insertion
    std::cout << "Deque elements after insertion: ";
    for (auto elem : dq) {
        std::cout << elem << " ";  // Output: 5 15 10
    }
    std::cout << std::endl;

    // Erase elements
    dq.erase(dq.begin() + 1);  // Removes the element at index 1 (15)

    // Display elements after erase
    std::cout << "Deque elements after erase: ";
    for (auto elem : dq) {
        std::cout << elem << " ";  // Output: 5 10
    }
    std::cout << std::endl;

    // Check if deque is empty
    std::cout << "Is deque empty? " << dq.empty() << "\n";  // Output: 0 (false, since it's not empty)

    // Clear all elements
    dq.clear();  // Empties the deque

    // Check if deque is empty after clearing
    std::cout << "Is deque empty after clearing? " << dq.empty() << "\n";  // Output: 1 (true)

    return 0;
}
