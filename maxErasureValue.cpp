#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-erasure-value/
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int start =0;
        int end = 0;
        // unordered_map<int, int> mp;
        unordered_set<int> mp;
        int ans =0;
        int currsum =0;
        while(end < nums.size()){
            currsum += nums[end];
            while(end < nums.size() && mp.find(nums[end]) != mp.end()){
                currsum -= nums[start];
                mp.erase(nums[start]);
                start++;
            }
            ans = max(ans, currsum);
            // mp[nums[end]] = end;
            mp.insert(nums[end]);
            end++;
        }
        return ans;
    }
};