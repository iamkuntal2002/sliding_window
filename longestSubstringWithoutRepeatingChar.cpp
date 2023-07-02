#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start =0;
        int end =0;
        int res =0;
        unordered_set<char> st;
        while(start < s.length() && end <s.length()){
            if(st.find(s[end]) == st.end()){
                st.insert(s[end]);
                res = max(res,end-start+1);
                end++;
            }
            else{
                st.erase(s[start]);
                start++;
            }
        }
        return res;
    }
};