//Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int slow=0,fast=0;
        for(int i=0;i<n;i++){
            int temp=slow;
            slow=max(slow,fast+nums[i]);
            fast=temp;
        }
        return slow;
    }
};