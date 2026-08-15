/*
Problem:Two Sum(Leetcode #1)
Approach:Brute Force using two nested loops
Time Complexity:O(n^2)
Space Complexity:O(1) auxillary space

We check every possible pair of elements and return
the indices of the pair whose sum equals the target.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={9,4,2,4,6};
    int sz=5;
    int target=8;

    vector<int>new_vec;

    for(int i=0;i<sz-1;i++){
        for(int j=i+1;j<sz;j++){
            if(vec[i]+vec[j]==target){
                new_vec.push_back(i);
                new_vec.push_back(j);
                break;
            }
        }
        if(new_vec.size()==2){
            break;
        }
    }

    for(int val:new_vec){
        cout<<val<<" ";
    }

    return 0;
    
}