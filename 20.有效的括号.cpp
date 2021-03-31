/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s == "")
            return true;
        stack<char> ch;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                ch.push(s[i]);
            }
            else{
                if(ch.empty()){
                    return false;
                }
                switch(s[i]){
                    case ']':
                        if(ch.top() == '['){
                            ch.pop();
                        } else {
                            return false;
                        }
                        break;
                    case ')':
                        if(ch.top() == '('){
                            ch.pop();
                        } else {
                            return false;
                        }
                        break;
                    case '}':
                        if(ch.top() == '{'){
                            ch.pop();
                        } else {
                            return false;
                        }
                        break;
                }
            }
        }
        if(ch.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end

