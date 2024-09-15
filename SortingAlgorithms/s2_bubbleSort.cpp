#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        bool isSwapped=false;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwapped=true;
            }
        }
        if(isSwapped==false) break;
    }
}
int main()
{
     int n;
    cout<<"Enter n:\n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    bubbleSort(arr,n);

    cout<<"After Sorting:\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}