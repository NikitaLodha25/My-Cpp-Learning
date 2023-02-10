// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int len=s.length();
         for (char& x : s) {
        x = tolower(x);
    }
      while(i < len){
    if (!isalnum(s[i]) || s[i] == ' '){
        s.erase(i,1);
        len--;
    }else
        i++;
} 
        string ori=s;
       reverse(s.begin(), s.end()); 
        if(s.compare(ori)==0)
            return true;
        
        return false;
    }
};