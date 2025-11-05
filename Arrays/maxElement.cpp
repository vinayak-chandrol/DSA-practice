#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int maxElement(vector<int> &arr)
    {
        int max = arr[0];//considering first element as max
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i] > max)//if current element is greater than max
                max = arr[i];//update max
        }
        return max;
    }
};
int main(){
    Solution sol;
    vector<int> arr = {1,4,7,32,6,3,90};//example array
    cout << "Max element: " << sol.maxElement(arr) << endl;
    return 0;
}