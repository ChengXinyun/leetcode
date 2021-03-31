/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int neg = -1;
        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                neg = i;
            } else {
                break;
            }
        }
        int pos = neg + 1;
        while(neg >= 0 || pos < n){
            if(neg < 0 ){
                ans.push_back(nums[pos]*nums[pos]);
                pos++;
            }
            else if(pos == n){
                ans.push_back(nums[neg]*nums[neg]);
                neg--;
            }
            else if(nums[neg]*nums[neg] < nums[pos]*nums[pos]){
                ans.push_back(nums[neg]*nums[neg]);
                neg--;
            } else {
                ans.push_back(nums[pos]*nums[pos]);
                pos++;
            }
        }
        return ans;
    }
};
// @lc code=end

