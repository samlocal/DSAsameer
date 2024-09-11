#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize an empty list of integers
    list<int> ls;

    // Insert 9 at the end of the list
    ls.push_back(9);  // List becomes: {9}

    // Insert 0 at the beginning of the list
    ls.push_front(0);  // List becomes: {0, 9}

    // Remove the last element
    ls.pop_back();  // List becomes: {0}

    // Remove the first element
    ls.pop_front();  // List becomes: {}

    // Emplace 8 at the end of the list (more efficient than push_back)
    ls.emplace_back(8);  // List becomes: {8}

    // Emplace 8 at the beginning of the list
    ls.emplace_front(8);  // List becomes: {8, 8}

    // Remove the last element
    ls.pop_back();  // List becomes: {8}

    // Remove the first element
    ls.pop_front();  // List becomes: {}

    // Check if the list is empty and print the result (1 if empty, 0 if not)
    cout << ls.empty();  // Output: 1 (since the list is empty)

    return 0;
}
