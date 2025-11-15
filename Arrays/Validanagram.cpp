//leet code problem problem 242 valid anagram
//the problem is to check whether two strings are anagram of each other or not
//i am updating the code using the new approach this is very optimised approach
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int arr[26]={0};

        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        
        return true;
    }
    
};