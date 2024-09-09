#include <iostream>  // Header file for input/output
#include <string>    // Header file for string operations
using namespace std;

int main() {
    // Arrays: Declaration and Initialization
    int numbers[5]; // Array of 5 integers
    string words[3] = {"Hello", "World", "C++"}; // Array of strings initialized with values

    // Input: Prompting the user to enter 5 integers
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i]; // Storing input in the array
    }

    // Output: Displaying the array elements
    cout << "\nYou entered the following integers:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Strings: Declaration, Initialization, and Manipulation
    string name;
    cout << "Enter your full name: ";
    cin.ignore();             // To ignore the newline character left in the buffer
    getline(cin, name);       // Reading a full line as a string

    // String Operations
    cout << "\nYour name is: " << name << endl;
    cout << "Your name has " << name.length() << " characters." << endl;
    cout << "The first character of your name is: " << name[0] << endl;

    // Modifying Strings
    name += " is learning C++."; // Concatenating another string to the existing one
    cout << "Modified name string: " << name << endl;

    // Output: Displaying the words array
    cout << "\nWords in the array:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0; // End of the program
}
