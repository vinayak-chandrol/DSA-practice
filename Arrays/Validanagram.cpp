//leet code problem problem 242 valid anagram
//the problem is to check whether two strings are anagram of each other or not
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        list <char> s1,t1;
        for(char a:s)
        {
            s1.push_back(a);
        }
        for(char b:t)
        {
            t1.push_back(b);
        }
        s1.sort();
        t1.sort();
        if(s1==t1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};