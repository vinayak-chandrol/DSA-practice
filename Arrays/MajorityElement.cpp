//leetcode problem 169 majority element
//the approach is to count the occurrences of each element and return the one that occurs more than n/2 times
//i used a nested loop to count occurrences i know this is not the most optimal solution but it works for small inputs but
//has a time complexity of O(n^2) the space complexity is O(1) that is given in the problem constraints and so we dont need extra space
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        float half=nums.size()/2.0;

        for(int i=0;i<nums.size();i++)
        {
           int count=0;
           int occ=nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]==occ)
                {
                    count++;
                }
            }
            if (count>half) return nums[i];
        }
    return 0;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {6,5,5};
    cout << sol.majorityElement(nums) << endl;
    return 0;
}