//Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> c1;
        int len=s.length();
        int ans=0,begin=0,end=0;
        
        while(end<len){
            if(c1.find(s[end])==c1.end())
               {  c1.insert(s[end]);
                 end++;
                 int curans=end-begin;
                 ans=max(ans,curans);
               }
            else
                {
                    c1.erase(s[begin]);
                    begin++;
                }
        }
        return ans;
    }
};