/*
Problem:Concatenation of Array(Leetcode #1929)
Approach:Brute Force 
Time Complexity:O(n)
Space Complexity:O(1) auxillary space

*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
int main(){
    Solution sol;
    vector<int>nums={1,2,1};
    vector<int>result=sol.getConcatenation(nums);
    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}