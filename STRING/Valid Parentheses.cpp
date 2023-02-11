// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 
class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(auto& x:str){    
           if(s.empty()||x=='('||x=='{'||x=='[') 
                s.push(x);
            else
            { 
                if((x=='}'&& s.top() =='{' )||(x==')'&& s.top() =='(') || (x==']'&& s.top() =='['))
                    s.pop();
                else 
                    return false;}   
        }
        if(s.empty())
        return true;    
        return false;
    }
};