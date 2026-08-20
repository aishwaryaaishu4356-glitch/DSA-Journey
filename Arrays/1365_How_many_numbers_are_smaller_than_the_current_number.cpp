#include<iostream>
#include<vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums){
    int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
int main(){
    vector<int> vec={8,1,2,2,3};
    vector<int> result=smallerNumbersThanCurrent(vec);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}