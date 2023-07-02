#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/max-consecutive-ones-iii/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans =0;
        int zerocount =0;
        int start = 0;
        int end = 0;
        while(end <nums.size()){
            if(nums[end] == 0) zerocount++;
            while(zerocount>k){
                if(nums[start++] == 0) zerocount--;
            }
            ans = max(ans,end-start+1);
            end++;
        }
        return ans;
    }
};