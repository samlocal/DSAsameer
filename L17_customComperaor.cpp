#include <bits/stdc++.h>
using namespace std;

// Comparator function to sort pairs
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    // Compare pairs based on the second element
    if (p1.second < p2.second) return true; // p1 should come before p2 if p1's second element is less than p2's
    if (p1.second > p2.second) return false; // p1 should come after p2 if p1's second element is greater than p2's

    // If the second elements are equal, compare based on the first element
    if (p1.second == p2.second)
    {
        // Sort by the first element in descending order
        if (p1.first > p2.first) return true; // p1 should come before p2 if p1's first element is greater than p2's
        else return false; // Otherwise, p1 should come after p2
    }

    // Default return false (not needed here but required to avoid compiler warnings)
    return false;
}

int main()
{
    // Initialize an array of pairs
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // Sort the array of pairs using the custom comparator function
    // The sorting will be done primarily by the second element in ascending order,
    // and if the second elements are equal, by the first element in descending order
    sort(a, a + 3, comp);

    // Print the sorted pairs
    for (auto i : a) 
        cout << i.first << "," << i.second << " ";

    return 0;
}
