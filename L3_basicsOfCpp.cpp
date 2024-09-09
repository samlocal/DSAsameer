#include <iostream>  // Header file for input/output
using namespace std;

int main() {
    // For Loop: Counting from 1 to 10
    cout << "For Loop: Counting from 1 to 10" << endl;
    for(int i = 1; i <= 10; i++) {
        cout << i << " "; // Prints numbers from 1 to 10
    }
    cout << endl; // Newline after the loop

    // For Loop: Iterating through an array
    int numbers[] = {10, 20, 30, 40, 50}; // Array of integers
    int arraySize = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size

    cout << "\nFor Loop: Iterating through an array" << endl;
    for(int i = 0; i < arraySize; i++) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    // While Loop: Counting down from 10 to 1
    cout << "\nWhile Loop: Counting down from 10 to 1" << endl;
    int countdown = 10;
    while(countdown > 0) {
        cout << countdown << " "; // Prints numbers from 10 to 1
        countdown--; // Decrement the countdown
    }
    cout << endl; // Newline after the loop

    // While Loop: Sum of digits example
    int number, sum = 0;
    cout << "\nEnter a positive integer to calculate the sum of its digits: ";
    cin >> number;

    // Loop to calculate the sum of digits
    while(number > 0) {
        int digit = number % 10; // Extract the last digit
        sum += digit;            // Add the digit to the sum
        number /= 10;            // Remove the last digit from the number
    }

    cout << "Sum of digits: " << sum << endl;

    // Do-While Loop: Ensuring the loop runs at least once
    int choice;
    do {
        cout << "\nDo-While Loop: Enter a number (0 to exit): ";
        cin >> choice;

        if(choice != 0) {
            cout << "You entered: " << choice << endl;
        }
    } while(choice != 0); // Loop continues until the user enters 0

    return 0; // End of the program
}
