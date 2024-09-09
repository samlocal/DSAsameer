#include <iostream>  // Header file for input/output
using namespace std;

// Function Declarations (Prototypes)
int add(int a, int b);                    // Function with pass-by-value parameters
void swapByValue(int x, int y);           // Function to demonstrate pass-by-value
void swapByReference(int &x, int &y);     // Function to demonstrate pass-by-reference
int factorial(int n);                     // Recursive function to calculate factorial
void printMessage(string message = "Hello, World!"); // Function with a default parameter
int add(int a, int b, int c);             // Function overloading: Different parameter list

int main() {
    // Function Call: Pass-by-Value
    int num1 = 10, num2 = 20;
    cout << "Pass-by-Value Example:" << endl;
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapByValue(num1, num2); // This will not change num1 and num2 in the main function
    cout << "After swapByValue: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Function Call: Pass-by-Reference
    cout << "\nPass-by-Reference Example:" << endl;
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapByReference(num1, num2); // This will swap num1 and num2 in the main function
    cout << "After swapByReference: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Function Call: Return Values
    int sum = add(num1, num2); // Calling the add function
    cout << "\nSum of num1 and num2: " << sum << endl;

    // Function Call: Default Parameters
    cout << "\nDefault Parameter Example:" << endl;
    printMessage();                   // No argument passed, default value will be used
    printMessage("Custom Message!");  // Argument passed, will override default value

    // Function Overloading
    cout << "\nFunction Overloading Example:" << endl;
    cout << "Sum of 10 and 20: " << add(10, 20) << endl;          // Calls add(int, int)
    cout << "Sum of 10, 20, and 30: " << add(10, 20, 30) << endl; // Calls add(int, int, int)

    // Recursive Function
    cout << "\nRecursive Function Example:" << endl;
    int number = 5;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;

    return 0; // End of the program
}

// Function Definitions

// Function to add two integers (pass-by-value)
int add(int a, int b) {
    return a + b; // Returns the sum of a and b
}

// Function to swap two integers using pass-by-value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // No effect on the actual arguments in the main function
}

// Function to swap two integers using pass-by-reference
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    // The actual arguments in the main function are swapped
}

// Recursive function to calculate factorial of a number
int factorial(int n) {
    if (n <= 1) return 1;   // Base case: factorial of 0 or 1 is 1
    else return n * factorial(n - 1); // Recursive call
}

// Function with a default parameter
void printMessage(string message) {
    cout << message << endl;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c; // Returns the sum of a, b, and c
}
