// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.
#include <iostream>
#include <vector>
 
using namespace std;

class solution{
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product;
        if(nums.size()<1)
            return product;
        int rightmul=1;
        for(int i=0;i<nums.size();i++){
            rightmul*=nums[i];
            product.push_back(rightmul);
        }
        rightmul=1;
        for(int i=nums.size()-1;i>0;i--){
            product[i]=product[i-1]*rightmul;
            rightmul*=nums[i];
        }
        product[0]=rightmul;
        return product;
    }
};