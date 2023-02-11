// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count1;
         unordered_map<char,int> count2;
        for(auto& i:s){
            if(count1.find(i)==count1.end())
                count1.insert(make_pair(i,1));
            else
                count1[i]++;
        }
        for(auto& i:t){
            if(count2.find(i)==count2.end())
                count2.insert(make_pair(i,1));
            else
                count2[i]++;
        }
        if(count1==count2)
            return true;
        return false;
    }
};