//Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maximum=max(sum,maximum);
            if(sum<0) 
                sum=0;
        }
        return maximum;
    }
};