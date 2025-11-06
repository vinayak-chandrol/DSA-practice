#include <iostream>
#include <vector>  
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,7,11,15}; // example array
    int target = 18; // example target

    vector<int> ans = sol.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << " these are the indices" << endl;

    return 0;
}
