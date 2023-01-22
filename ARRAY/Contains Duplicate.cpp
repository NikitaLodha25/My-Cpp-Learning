// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include <iostream>
#include <vector>
 
using namespace std;
 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0) return false;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
                return true;
        }
        
        return false;
    }
};