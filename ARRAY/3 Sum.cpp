// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> v;
        if (n<3)
            return v;
      
        sort(nums.begin(), nums.end());
        for (int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                int total=nums[left]+nums[right]+nums[i];
                if(total==0)
                {
                    v.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while((nums[left]==nums[left-1]) && (left<right ))
                        left++;
                    while((nums[right]==nums[right+1])&& (left<right ))
                        right--;
                }
                else if(total<0)
                    left++;
                else
                    right--;
            }
        }
        return v;
    }
};