#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize an empty vector of integers
    vector<int> v;
    v.push_back(23);       // Insert 23 at the end of vector v
    v.emplace_back(8);     // Emplace 8 at the end of vector v (efficient in-place construction)
    
    // Initialize a vector of pairs
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});  // Push a pair (1, 2) to v1
    v1.emplace_back(3, 4); // Emplace a pair (3, 4) to v1 (in-place construction)

    // Initialize a vector of size 10 with default value (0)
    vector<int> v2(10);    

    // Initialize a vector of size 6 with all elements set to 99
    vector<int> v3(6, 99); 

    // Copy contents of v3 into a new vector v4
    vector<int> v4(v3);    

    // Access and print the 6th element (index 5) using two different methods
    cout << "v4[5]: " << v4[5] << "\n";
    cout << "v4.at(5): " << v4.at(5) << "\n";

    // Iterators example
    vector<int> vec = {1, 2, 66, 23, 7, 8, 99, 0, 123, 978}; // Initialize vector with some values

    // Iterator pointing to the beginning
    vector<int>::iterator it = vec.begin();
    cout << "First element: " << *(it) << "\n";

    // Print vector elements using iterators from begin() to end()
    cout << "Vector elements (forward): ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) 
        cout << *(it) << " ";
    cout << "\n";

    // Print vector elements in reverse using normal iterators
    cout << "Vector elements (backward with regular iterator): ";
    for (vector<int>::iterator it = vec.end() - 1; it != vec.begin() - 1; it--) 
        cout << *(it) << " ";
    cout << "\n";

    // Using reverse_iterator for reverse traversal
    cout << "Vector elements (reverse iterator): ";
    for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++) 
        cout << *(it) << " ";
    cout << "\n";

    // Another reverse traversal using reverse_iterator (careful with rend-1 logic)
    cout << "Vector elements (reverse iterator using rend()-1): ";
    for (vector<int>::reverse_iterator it = vec.rend() - 1; it != vec.rbegin() - 1; it--) 
        cout << *(it) << " ";
    cout << "\n";

    // Print vector elements using range-based for loop
    cout << "Vector elements (range-based loop): ";
    for (auto it : vec) 
        cout << it << " ";
    cout << "\n";

    // Erase operations
    cout << "Erase first element: ";
    vec.erase(vec.begin()); // Erase the first element
    for (auto it : vec) 
        cout << it << " ";
    cout << "\n";

    cout << "Erase second element: ";
    vec.erase(vec.begin()); // Erase the second element
    for (auto it : vec) 
        cout << it << " ";
    cout << "\n";

    cout << "Erase first three elements: ";
    vec.erase(vec.begin(), vec.begin() + 3); // Erase first three elements
    for (auto it : vec) 
        cout << it << " ";
    cout << "\n";

    // Insert operations
    cout << "Insert 10000 at position 2: ";
    vec.insert(vec.begin() + 1, 10000); // Insert 10000 at index 1
    for (auto it : vec) 
        cout << it << " ";
    cout << "\n";

    cout << "Insert five 999999 at position 4: ";
    vec.insert(vec.begin() + 3, 5, 999999); // Insert five copies of 999999 at index 3
    for (auto it : vec) 
        cout << it << " ";
    cout << "\n";

    // Insert a range of elements from another vector
    vector<int> vec1 = {1, 2, 3, 4, 5};  // First vector
    vector<int> vec2 = {6, 7, 8, 9, 10}; // Second vector

    cout << "Insert vec2 into vec1 at the end: ";
    vec1.insert(vec1.end(), vec2.begin(), vec2.end()); // Append vec2 elements at the end of vec1
    for (auto it : vec1) 
        cout << it << " ";
    cout << "\n";

    return 0;
}
