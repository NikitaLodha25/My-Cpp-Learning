//Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++)
        {
            if(count.find(nums[i])==count.end())
                count[nums[i]]=1;
            else 
                count[nums[i]]++;
        }
        
        vector<pair<int, int>> countVec(count.begin(),count.end());
         sort(countVec.begin(), countVec.end(),
         [](const auto& a, const auto& b) {
             return a.second > b.second;
         });
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(countVec[i].first);
        }
        
        return ans;
    }
};