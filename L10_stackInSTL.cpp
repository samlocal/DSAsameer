#include <iostream>
#include <stack>
#include <list> // For using custom container in stack

int main() {
    // 1. Basic Stack Operations
    std::cout << "Basic Stack Operations:\n";
    std::stack<int> stk; // Create a stack of integers

    // Push elements onto the stack
    stk.push(10);
    stk.push(20);
    stk.push(30);

    // Display and remove elements from the stack
    std::cout << "Stack elements (top to bottom):\n";
    while (!stk.empty()) {
        std::cout << stk.top() << std::endl; // Display top element
        stk.pop(); // Remove top element
    }

    // Size of the stack
    std::cout << "Stack size after operations: " << stk.size() << std::endl; // Output: 0 (empty)

    // 2. Custom Container Type
    std::cout << "\nCustom Container Type (using std::list):\n";
    std::stack<int, std::list<int>> customStack; // Using std::list instead of std::deque

    // Push elements onto the custom stack
    customStack.push(100);
    customStack.push(200);
    customStack.push(300);

    // Display and remove elements from the custom stack
    std::cout << "Custom stack elements (top to bottom):\n";
    while (!customStack.empty()) {
        std::cout << customStack.top() << std::endl; // Display top element
        customStack.pop(); // Remove top element
    }

    // Size of the custom stack
    std::cout << "Custom stack size after operations: " << customStack.size() << std::endl; // Output: 0 (empty)

    // 3. Checking if Stack is Empty
    std::cout << "\nChecking if Stack is Empty:\n";
    std::stack<int> emptyStack;
    std::cout << "Is the stack empty? " << (emptyStack.empty() ? "Yes" : "No") << std::endl; // Output: Yes

    // Adding elements to the stack
    emptyStack.push(1);
    emptyStack.push(2);
    std::cout << "Is the stack empty now? " << (emptyStack.empty() ? "Yes" : "No") << std::endl; // Output: No

    // 4. Top Element Access
    std::cout << "\nAccessing Top Element:\n";
    std::stack<int> topStack;
    topStack.push(5);
    topStack.push(15);
    topStack.push(25);

    // Access the top element without removing it
    std::cout << "Top element before pop: " << topStack.top() << std::endl; // Output: 25

    // Remove the top element
    topStack.pop();
    std::cout << "Top element after pop: " << topStack.top() << std::endl; // Output: 15

    // 5. Clear Stack (not directly supported, but can be done with pop)
    std::cout << "\nClearing Stack:\n";
    while (!topStack.empty()) {
        topStack.pop(); // Remove all elements
    }
    std::cout << "Stack size after clearing: " << topStack.size() << std::endl; // Output: 0

    return 0;
}
