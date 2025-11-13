#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set <int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.find(nums[i])!=ans.end())return true;
            ans.insert(nums[i]);
            if(ans.size()>k){
                ans.erase(nums[i-k]);
            }
        }return false;
    }
};
int main(){
	Solution obj;
	vector <int> nums ={1,2,3,1,2,3};
	int k=2;
	cout<<obj.containsNearbyDuplicate(nums,k)<<endl;
	nums ={1,0,1,1};
	k=1;
	cout<<obj.containsNearbyDuplicate(nums,k);
	
	
}