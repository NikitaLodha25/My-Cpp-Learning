//Given a string s containing only digits, return the number of ways to decode it.

class Solution {
public:
    int help(int i,string s,vector<int> &dp){
        if(s[i]=='0') return 0;
        if(i==s.size()) return 1;
        if(dp[i]!=-1) return dp[i];
        int one=help(i+1,s,dp);
        int two=0;
        if(i<s.size()-1 && (s[i]=='1'|| s[i]=='2' && s[i+1]<='6'))
            two=two+help(i+2,s,dp);
        return dp[i]=one+two;
    }
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        return help(0,s,dp);
    }
};