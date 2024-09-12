//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
    private:
    long long sum(long long n)
    {
        if(n<=1) return 1;
        return (n*n*n)+sum(n-1);
    }
  public:
    long long sumOfSeries(long long n) {
        return sum(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends