#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[mini],arr[i]);
    }
}
int main()
{
    int n;
    cout<<"Enter n:\n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    selectionSort(arr,n);

    cout<<"After Sorting:\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}