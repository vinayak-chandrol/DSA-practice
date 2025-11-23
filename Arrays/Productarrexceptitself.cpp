#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans(nums.size(),1);
        int pre=1;
        int post=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pre;
            pre=nums[i]*pre;
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=ans[i]*post;
            post=nums[i]*post;
        }

        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}   
//leet code problem 238 product of array except itself
//the problem is to find the product of array except itself without using division operator and in o(n) time complexity