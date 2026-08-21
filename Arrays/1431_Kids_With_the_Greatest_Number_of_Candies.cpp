/*
Leetcode 1431: Kids With the Greatest Number of Candies
Approach: Find the maximum number of candies and compare each child's candies + extraCandies with it.
Time Complexity: O(n)
Space Complexity:O(n)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int n=candies.size();
      vector<bool> result;
      int maxEle=*max_element(candies.begin(),candies.end());
      for(int i=0;i<n;i++){
        if(candies[i]+extraCandies>=maxEle){
            result.push_back(true);
        }else{
            result.push_back(false);
        }
      }
      return result;  
    }
int main(){
    vector<int> vec={2,3,5,1,3};
    int extraCandy=3;
    vector<bool> result=kidsWithCandies(vec,extraCandy);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}