#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring a pair of two integers, initialized with {1, 2}
    pair<int, int> p = {1, 2};
    // Accessing and printing the first and second elements of the pair
    cout << p.first << " " << p.second << "\n"; // Output: 1 2

    // Declaring a nested pair where the second element is itself a pair
    pair<int, pair<int, int>> p1 = {2, {2, 8}};
    // Accessing and printing the first element of p1 and the first element of the nested pair
    cout << p1.first << " " << p1.second.first << "\n"; // Output: 2 2

    // Declaring an array of pairs, each element is a pair of two integers
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    // Accessing and printing the second element of the third pair in the array
    cout << arr[2].second << "\n"; // Output: 4
}
