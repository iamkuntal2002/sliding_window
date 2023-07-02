#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/subarray-product-less-than-k/
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k <= 1) return 0;
        int answer = 0;
        int currentpdt = 1;
        int left = 0;        
        for(int right = 0; right < n; right++){
            currentpdt *= nums[right];
            while(currentpdt >= k){
                currentpdt /= nums[left++];
            }
            answer += right-left+1;
        }
        return answer;
    }
};