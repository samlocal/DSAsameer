#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
void print2(int n)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++) cout<<"* ";
		cout<<"\n";
	}    
}
void print3(int n)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++) cout<<j+1<<" ";
		cout<<"\n";
	}
}
void print4(int n)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<i+1<<" ";
		}
		cout<<"\n";
	}
}
void print5(int n)
{
    for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
void print6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void print7(int n)
{
     for(int i=0;i<n;i++)
     {
        //space
        for(int j1=0;j1<=n-i-1;j1++) cout<<" ";
        //star
        for(int j2=0;j2<2*i+1;j2++) cout<<"*";
        //space
        for(int j1=0;j1<=n-i-1;j1++) cout<<" ";

        cout<<"\n";
     }

}

int main()
{
    int n;
    cout<<"Enter n:\n";
    cin>>n;
    print7(n);
}
