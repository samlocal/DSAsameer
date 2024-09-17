//Approach 2
/*
int missingNumber(vector<int>&a, int N) {
    int ans=0;
    int freqArr[N+1]={0};
    for(int i=0;i<a.size();i++)
    {
        freqArr[a[i]]++;
    }

    for(int i=1;i<=N;i++)
    {
        if (freqArr[i] == 0) {
          ans = i;
          break;
        }
    }
    return ans;
}*/

// Approach 1
/*
int missingNumber(vector<int>&a, int N) {
    int ans=0;
    for(int i=1;i<=N;i++)
    {
        bool flag=0;
        for(int j=0;j<a.size();j++)
        {
            if(i==a[j])
            {
                flag=1;
                break;
            }
        }
        if (flag == 0) {
            ans = i;
            break;
        }
    }
    return ans;
}
*/

/*Approach 3
int missingNumber(vector<int>&a, int N) {
    int ans=0;
    for(int i=0;i<a.size();i++) ans=ans^a[i];

    for(int i=1;i<=N;i++) ans=ans^i;
    return ans;
}*/