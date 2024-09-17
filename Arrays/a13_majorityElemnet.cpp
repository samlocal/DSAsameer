#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	int candidate;
	int count=0;

	for(int i=0;i<v.size();i++)
	{
		if(count==0)
		{
			candidate=v[i];
			count+=1;
		}
		else if(v[i]==candidate) count++;
		else count--; //v[i]!=candidate
	}

	int chechingCount=0;

	for(int i=0;i<v.size();i++)
	{
		if(v[i]==candidate) chechingCount++;
	}

	if(chechingCount>(v.size()/2)) return candidate;
	return -1;
}