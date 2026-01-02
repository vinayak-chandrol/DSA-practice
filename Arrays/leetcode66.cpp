class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
       
        int s=digits.size();
        if(s==1){
            vector<int> ans;
            ans.push_back(digits[0]+1);
            if(ans[0]==10){
              ans[0]=1;
              ans.push_back(0);
            }
            return ans;
        }else{
        digits[s-1]=digits[s-1]+1;
        return digits;
        }
    }
};