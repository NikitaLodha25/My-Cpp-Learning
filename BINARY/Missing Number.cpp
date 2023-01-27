// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> check;
        int len=nums.size();
        for(int i=0;i<=len;i++){
            check.push_back(i);
        }
        int missing=-1;
        for(int i=0;i<len;i++){
            if(check[i]!=nums[i])
                { missing=check[i];
                   break;
                }
        }
        if(missing==-1)
        {
            missing=nums.size();
        }
        return missing;
    }
};