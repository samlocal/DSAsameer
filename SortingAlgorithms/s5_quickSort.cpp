#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int low,int high)
{
    int i=low;
    int j=high;
    int pivotElement=arr[low];

   while(i<j)
   {
     while(i<=high && arr[i]<=pivotElement) i++;
    while(j>=low && arr[j]>pivotElement) j--;

    if(i<j) swap(arr[i],arr[j]);
   }
   swap(arr[low],arr[j]);
    return  j;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int partitionIndex=pivot(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main()
{
     int n;
    cout<<"Enter n:\n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    quickSort(arr,0,n-1);

    cout<<"After Sorting:\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}