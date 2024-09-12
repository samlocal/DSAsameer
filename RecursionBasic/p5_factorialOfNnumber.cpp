//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    private:
    long long factorial(long long n)
    {
        long long product=1;
        for(int i=1;i<=n;i++)
        {
            product*=i;
        }
        return product;
    }
    
    long long factorialExtraSpace(long long n)
    {
        if(n<=1) return n;
        return n*factorialExtraSpace(n-1);
    }
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long>ans;
        
        for(int i=1;i<=n;i++)
        {
            long long fact=factorialExtraSpace(i);
            if(fact>n) break;
            ans.push_back(fact);
        }
        return ans;
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
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends