/*
Leetcode 169: Majority Element
Approach: Brute force optimised with sorting
Time Complexity: O(n log n)
Space Complexity:O(1)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int freq=1,ans=nums[0];
      for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            return ans;
        }
      } 
    return ans; 
    }
int main(){
    vector<int> vec={1,2,1};
    int result=majorityElement(vec);
    cout<<result<<endl;
    return 0;
}