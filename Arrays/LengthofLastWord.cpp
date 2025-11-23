#include <string>
using namespace std;
//leet code problem 58 length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        int count=0;
        for(i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
               break;
            }
        }
        for(int j=i;j>=0;j--){
            if(s[j]!=' '){
                count++;
            }
            else{
                return count;
            }
           
        }
         return count;
      
    }
};
int main() {
    Solution sol;
    string s = "Hello World";
    int length = sol.lengthOfLastWord(s);
    return 0;
}