//Approach1
/*
int isSorted(int n, vector<int> a) {
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1]) return false;
    }
    return true;
}
*/

//Approach2
/*
int isSorted(int n, vector<int> a) {
    for(int i=0;i<n-2;i++)
    {
        if(a[i]>a[i+1]) return false;
    }
    return true;
}
*/
