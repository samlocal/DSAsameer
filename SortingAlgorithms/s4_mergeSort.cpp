#include<bits/stdc++.h>
using namespace std;
//there are two merge fuctions
//one uses vector
//another uses array
void merge0(int arr[],int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void merge(int arr[],int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    int temp[low+high+1];
    int index=0;

    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            left++;
            index++;
        }
        else{
            temp[index]=arr[right];
            right++;
            index++;
        }
    }
    while(left<=mid)
    {
        temp[index]=arr[left];
        left++;
        index++;
    }
    while(right<=high)
    {
        temp[index]=arr[right];
        right++;
        index++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void mergeSort(int arr[],int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
     int n;
    cout<<"Enter n:\n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    mergeSort(arr,0,n-1);

    cout<<"After Sorting:\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}