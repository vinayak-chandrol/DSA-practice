#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minprice;
            if(profit>maxprofit){
                maxprofit=profit;
            }

            if(prices[i]<minprice){
                minprice=prices[i];
            }

          
        }
          return maxprofit;
    }
        
};

int main(){
    Solution obj;
    vector <int> prices={7,1,5,3,6,4};
    cout<<obj.maxProfit(prices)<<endl;
    prices={7,6,4,3,1};
    cout<<obj.maxProfit(prices);
}