#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/fruit-into-baskets/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int start = 0, end =0;
        int ans = 0;
        for(end = 0;end<fruits.size();end++){
            mp[fruits[end]]++;
            while(mp.size() >2){
                if(mp[fruits[start]] == 1) mp.erase(fruits[start]);
                else mp[fruits[start]]--;
                start++;
            }
            ans = max(ans,end-start+1);
        }
        return ans;
    }
};