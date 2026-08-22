/*
Leetcode 1672: Richest Customer Wealth
Approach:Traversing vector
Time Complexity:O(n*m)
Space Complexity:O(1)
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int balance:accounts[i]){
                sum+=balance;
            }
            if(sum>maxWealth){
                maxWealth=sum;
            }
        }
        return maxWealth;
    }
};