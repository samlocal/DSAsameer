// https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1
// Approach 1
/*
void print_divisors(int n) {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0) cout<<i<<" ";
        }
}*/

//Approach2
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
  public:
    void print_divisors(int n) {
        int sqrtN=sqrt(n);
        vector<int>ans;
        for(int i=1;i<=sqrtN;i++)
        {
            if(n%i==0) {
                ans.push_back(i);
                if(n/i!=i) ans.push_back(n/i);
            }
        }
        sort(ans.begin(),ans.end());
        for(auto it:ans) cout<<it<<" ";
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends