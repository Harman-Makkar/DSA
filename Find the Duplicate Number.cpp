#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums){
    
    int n=nums.size();
    int ans=0;

    sort(nums.begin(),nums.end());
    
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i+1]){
            ans=nums[i];
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={1,3,4,2,2};
    cout<<findDuplicate(nums)<<endl;
}


