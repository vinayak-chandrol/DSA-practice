#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set <int> a(nums.begin(),nums.end());//Using set to store unique elements
        if(nums.size()==a.size())//If size of set and vector are same then no duplicates
        {
            return false;
        }
        else
        {
            return true;
        }

    }
};
int main(){
    Solution obj;
    vector<int> nums={2,4,56,5,7};
    cout<<obj.containsDuplicate(nums);
    return 0;
}