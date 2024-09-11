#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 1. Basic Priority Queue Operations
    std::cout << "Basic Priority Queue Operations:\n";
    std::priority_queue<int> pq; // Max-heap by default

    // Push elements onto the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Display and remove elements from the priority queue
    std::cout << "Priority queue elements (top to bottom):\n";
    while (!pq.empty()) {
        std::cout << pq.top() << std::endl; // Display top element
        pq.pop(); // Remove top element
    }

    // Size of the priority queue
    std::cout << "Priority queue size after operations: " << pq.size() << std::endl; // Output: 0 (empty)

    // 2. Min-Heap (Custom Comparison)
    std::cout << "\nMin-Heap (using std::greater):\n";
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap; // Min-heap

    // Push elements onto the min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    // Display and remove elements from the min-heap
    std::cout << "Min-heap elements (top to bottom):\n";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << std::endl; // Display top element
        minHeap.pop(); // Remove top element
    }

    // Size of the min-heap
    std::cout << "Min-heap size after operations: " << minHeap.size() << std::endl; // Output: 0 (empty)

    // 3. Priority Queue with Custom Data Type
    std::cout << "\nPriority Queue with Custom Data Type:\n";
    struct Person {
        std::string name;
        int priority;

        // Custom comparison operator for priority
        bool operator<(const Person& other) const {
            return priority < other.priority; // Max-heap based on priority
        }
    };

    std::priority_queue<Person> personQueue;

    // Push elements onto the priority queue
    personQueue.push({"Alice", 5});
    personQueue.push({"Bob", 10});
    personQueue.push({"Charlie", 7});

    // Display and remove elements from the priority queue
    std::cout << "Priority queue with custom data type (top to bottom):\n";
    while (!personQueue.empty()) {
        Person topPerson = personQueue.top();
        std::cout << topPerson.name << " with priority " << topPerson.priority << std::endl;
        personQueue.pop(); // Remove top element
    }

    return 0;
}
