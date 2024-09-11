#include <iostream>
#include <queue>
#include <list> // For using custom container in queue

int main() {
    // 1. Basic Queue Operations
    std::cout << "Basic Queue Operations:\n";
    std::queue<int> q; // Create a queue of integers

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Display and remove elements from the queue
    std::cout << "Queue elements (front to back):\n";
    while (!q.empty()) {
        std::cout << q.front() << std::endl; // Display front element
        q.pop(); // Remove front element
    }

    // Size of the queue
    std::cout << "Queue size after operations: " << q.size() << std::endl; // Output: 0 (empty)

    // 2. Custom Container Type
    std::cout << "\nCustom Container Type (using std::list):\n";
    std::queue<int, std::list<int>> customQueue; // Using std::list instead of std::deque

    // Enqueue elements
    customQueue.push(100);
    customQueue.push(200);
    customQueue.push(300);

    // Display and remove elements from the custom queue
    std::cout << "Custom queue elements (front to back):\n";
    while (!customQueue.empty()) {
        std::cout << customQueue.front() << std::endl; // Display front element
        customQueue.pop(); // Remove front element
    }

    // Size of the custom queue
    std::cout << "Custom queue size after operations: " << customQueue.size() << std::endl; // Output: 0 (empty)

    // 3. Checking if Queue is Empty
    std::cout << "\nChecking if Queue is Empty:\n";
    std::queue<int> emptyQueue;
    std::cout << "Is the queue empty? " << (emptyQueue.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // Adding elements to the queue
    emptyQueue.push(1);
    emptyQueue.push(2);
    std::cout << "Is the queue empty now? " << (emptyQueue.empty() ? "Yes" : "No") << std::endl; // Output: No

    // 4. Front and Back Element Access
    std::cout << "\nAccessing Front and Back Elements:\n";
    std::queue<int> accessQueue;
    accessQueue.push(5);
    accessQueue.push(15);
    accessQueue.push(25);

    // Access the front and back elements
    std::cout << "Front element: " << accessQueue.front() << std::endl; // Output: 5
    std::cout << "Back element: " << accessQueue.back() << std::endl;   // Output: 25

    // Remove the front element
    accessQueue.pop();
    std::cout << "Front element after pop: " << accessQueue.front() << std::endl; // Output: 15

    // 5. Clear Queue (not directly supported, but can be done with pop)
    std::cout << "\nClearing Queue:\n";
    while (!accessQueue.empty()) {
        accessQueue.pop(); // Remove all elements
    }
    std::cout << "Queue size after clearing: " << accessQueue.size() << std::endl; // Output: 0

    return 0;
}
