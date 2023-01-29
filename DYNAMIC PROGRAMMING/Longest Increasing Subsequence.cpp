// Given an integer array nums, return the length of the longest strictly increasing subsequence.

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        int c=1;
    for(int i=1;i<n;i++){
       for(int j=i-1;j>=0;j--){
           if(nums[j]<nums[i]){
               dp[i]=max(dp[i],dp[j]+1);
                c=max(c,dp[i]);
           }
       }   
    }
       
        return c;
 }   
};