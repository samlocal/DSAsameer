#include <iostream> // Header file for input/output
#include <string>   // Header file for string operations

using namespace std; // Standard namespace to avoid prefixing std::

int main() {
    // Basic Data Types
    int age;                    // Integer type
    float height;               // Floating-point type
    char initial;               // Character type
    bool isStudent;             // Boolean type
    string name;                // String type (not a primitive data type)

    // Input: Prompting the user for their information
    cout << "Enter your name: ";
    getline(cin, name); // Using getline to read a string with spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter the first initial of your last name: ";
    cin >> initial;

    cout << "Are you a student? (1 for Yes, 0 for No): ";
    cin >> isStudent;

    // Output: Displaying the user's information
    cout << "\nYour Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Last Name Initial: " << initial << endl;
    cout << "Student Status: " << (isStudent ? "Yes" : "No") << endl;

    // Conditional Statements (if-else)
    if (age < 18) {
        cout << "You are a minor." << endl;
    } else if (age >= 18 && age < 60) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior citizen." << endl;
    }

    // Switch Statement: Age group classification
    switch (age / 10) {
        case 0:  // Age 0-9
        case 1:  // Age 10-19
            cout << "You are a teenager or younger." << endl;
            break;
        case 2:  // Age 20-29
        case 3:  // Age 30-39
        case 4:  // Age 40-49
        case 5:  // Age 50-59
            cout << "You are in your prime adult years." << endl;
            break;
        default: // Age 60 and above
            cout << "You are in the golden years." << endl;
            break;
    }

    return 0; // End of the program
}
