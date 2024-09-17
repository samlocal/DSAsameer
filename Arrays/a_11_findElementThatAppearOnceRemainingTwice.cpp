#include<vector>
using namespace std;
int getSingleElement(vector<int> &arr){
	int ans=0;
	for(int i=0;i<arr.size();i++) ans^=arr[i];
	return ans;	
}



//Approach 1
/*
int getSingleElement(vector<int> &arr){
	int ans=0;
	int n=arr.size();
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==arr[i]) count++;
		}
		if(count==1) {
			ans=arr[i];
			break;
		}
	}	
	return ans;
}
*/

