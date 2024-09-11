// https://www.naukri.com/code360/problems/count-digits_8416387?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int m=n;
	int count=0;
	while(m>0)
	{
		int lastDigit=m%10;
		if(lastDigit!=0 && n%lastDigit==0) count++;
		m=m/10;
	}
	return count;
}