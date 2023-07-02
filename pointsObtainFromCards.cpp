#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int ans = 0;
        int left = 0;
        int right = card.size()-1;
        while(left <= right && k){
            if(card[left]>card[right]){
                ans += card[left];
                left++;
                // k--;
            }
            else{
                ans += card[right];
                right--;
                // k--;
            }
            k--;
        }
        return ans;
    }
};