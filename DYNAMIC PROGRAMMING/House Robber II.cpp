// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

class Solution {
public:
    int rob(vector<int>& nums) {
        int slow=0,fast=0,n=nums.size();
        if(n==0) return 0;
        if(n==1)
            return nums[0];
        int sl=0,ft=0;
        for(int i=0,j=n-1;i<n-1,j>0;i++,j--){
            int temp=slow;
            slow=max(slow,fast+nums[i]);
            fast=temp;
            int temp2=sl;
            sl=max(sl,ft+nums[j]);
            ft=temp2;
        }
        return max(slow,sl);
    }
};