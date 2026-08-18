/*
LeetCode 1480 -Running Sum of 1d Array
Approach:Calculate the cumulative sum while traversing the array.
Time Complexity: O(n)
Space Complexity:O(1)
*/
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size(),runSum=0;
        vector<int> new_vec;
        for(int i=0;i<n;i++){
            runSum+=nums[i];
            new_vec.push_back(runSum);
        }
        return new_vec;
    }
    
};