// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
#include <iostream>
#include <vector>
 
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;        
         for(int i=0;i<nums.size();i++){
             for(int j=i+1;j<nums.size();j++){
                 if(nums[j]+nums[i]==target){
                     sum.push_back(i);
                     sum.push_back(j);
                               
                 }            
             }
         } 
        return sum;
    }
 };