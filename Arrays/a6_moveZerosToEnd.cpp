#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    int index=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]>0)
        {
            if(index!=j) swap(a[index],a[j]);
            index++;
        }
    }
    return a;
}
