#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-length-of-repeated-subarray/
class Solution {
public:
    int ans = 0;
    int helper(vector<int>& nums1,vector<int>& nums2, int i, int j, vector<vector<int>>& dp){
        if(i >= nums1.size() || j>= nums2.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int currlen =0;
        if(nums1[i] == nums2[j]){
            currlen = helper(nums1,nums2,i+1,j+1,dp)+1;
            ans = max(currlen,ans);
        }
        helper(nums1,nums2,i+1,j,dp);
        helper(nums1,nums2,i,j+1,dp);
        dp[i][j] = currlen;
        return dp[i][j];
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        if(m==0 || n==0) return 0;
        helper(nums1,nums2,0,0,dp);
        return ans;
    }
};