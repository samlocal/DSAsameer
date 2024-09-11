//https://leetcode.com/problems/palindrome-number/
class Solution {
    private:
    long long reverseNum(int n)
    {
        long long ans=0;
        while(n>0)
        {
            long long digit=n%10;
            ans=(ans*10)+digit;
            n=n/10;
        }
        return ans;
    }
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long num=x;
        long long rev=reverseNum(num);
        if(rev==x) return true;
        return false;
    }
};