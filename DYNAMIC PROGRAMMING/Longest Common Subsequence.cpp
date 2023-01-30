// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.


// MEMORIZATION :
class Solution {
public:
    int longestCommonSubsequence(string &text1, string &text2,int i,int j,int dp[][1001]){
        if(i==0 || j==0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i-1]==text2[j-1])
            return dp[i][j]=1+longestCommonSubsequence(text1,text2,i-1,j-1,dp);
        else 
            return dp[i][j]=max(longestCommonSubsequence(text1,text2,i-1,j,dp),longestCommonSubsequence(text1,text2,i,j-1,dp));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
		int i=text1.length(),j=text2.length();
        int dp[1001][1001];
        for(int k=0;k<1001;k++){
            for(int l=0;l<1001;l++)
                dp[k][l]=-1;
        }
        return longestCommonSubsequence(text1,text2,i,j,dp);
    }
    
    
};


// DYNAMIC PROGRAMMING :
class Solution {
public:
   
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
               if(text1[i-1]==text2[j-1]){
                  dp[i][j]= 1+dp[i-1][j-1];
               }else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               } 
            }
        }
        return dp[m][n];
    }
};
