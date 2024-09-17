//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        
        //Approach1
        /*
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int largest=arr[n-1];
        int i=0;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]!=largest){
                largest=arr[i];
                break;
            }
        }
        if(i<0) return -1;
        return largest;
        */
        
        
        //Approach2
        /*
        int largest=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>largest) largest=arr[i];
        }
        
        int secondLargest=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>secondLargest && arr[i]!=largest)
            {
                secondLargest=arr[i];
            }
        }
        
        if(secondLargest==INT_MIN) return -1;
        return secondLargest;
        */
        
        
        //Approach3
        int largest=INT_MIN;
        int secondLargest=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>largest)
            {
                secondLargest=largest;
                largest=arr[i];
                
            }
            else if(arr[i]>secondLargest && arr[i]<largest)
            {
                secondLargest=arr[i];
            }
        }
        if(secondLargest==INT_MIN ) return -1;
        return secondLargest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends