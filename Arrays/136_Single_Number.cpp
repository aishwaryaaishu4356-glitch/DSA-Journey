/*
Problem:Single Number
LeetCOde:136
Difficulty:Easy
Topic:Array, Bit Manipulation

Time Comlexity:O(n)
Space Complexity:O(1)
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans=ans^val;
        }
        return ans;
    }
};