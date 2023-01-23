//Given an integer array nums, find the subarray with the largest product, and return its product.

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum=nums[0];
        int product=1;
        for(int i=0;i<nums.size();i++){
            product=product*nums[i];
            maximum=max(product,maximum);
            if (product==0)
                product=1;
        }
        product=1;
        for(int i=nums.size()-1;i>=0;i--){
            product=product*nums[i];
            maximum=max(product,maximum);
            if (product==0)
                product=1;
        }
        return maximum;
    }
};