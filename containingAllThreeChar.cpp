#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters//
class Solution {
public:
    int numberOfSubstrings(string s) {
        int left =0;
        int right = 0;
        int ans =0;
        vector<int> st(3,0);
        for(right =0; right<s.length(); right++){
            st[s[right] - 'a']++;
            while(st[0] >0 && st[1] > 0 && st[2] > 0 && left <= right){
                st[s[left] - 'a']--;
                ans += (s.length() - right);
                cout<<ans<<" ";
                left++;
            }
        }
        return ans;
    }
};

int main(){
    Solution ob;
    ob.numberOfSubstrings("abcabc");
}
// abcabc
// r = 3