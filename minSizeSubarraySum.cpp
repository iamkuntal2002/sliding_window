#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlength = INT_MAX;
        int i = 0, j = 0;
        int sum = 0;
        while(j<n){
            sum  += nums[j++];
            while(sum >= target){
                minlength = min(minlength, j - i);
                sum -= nums[i++];
                }
            }
        if(minlength == INT_MAX) return 0;
        else return minlength;
    }
};