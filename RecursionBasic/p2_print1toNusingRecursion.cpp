//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    private:
    void print(int N)
    {
        if(N<=0) return;
        print(N-1);
        cout<<N<<" ";
    }
    public:
    //Complete this function
    void printNos(int N)
    {
        print(N);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends