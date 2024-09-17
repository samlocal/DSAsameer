#include<bits/stdc++.h>
using namespace std;

//Approach1
/*
vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    for(int i=0;i<k;i++)
    {
        int first=arr[0];
        for(int i=1;i<n;i++) arr[i-1]=arr[i];
        arr[n-1]=first;
    }
    return arr;
}
*/

//Approach 2
/*vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    k=k%n;
    int temp[k];
    
    for(int i=0;i<k;i++) temp[i]=arr[i];

    for(int i=k;i<n;i++) arr[i-k]=arr[i];
    
    int index=0;
    for(int i=n-k;i<n;i++) arr[i]=temp[index++];

    return arr;
}

*/