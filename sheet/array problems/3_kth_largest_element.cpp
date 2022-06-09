#include <vector>
#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());

    return nums[nums.size()-k];
}
int main(){
    vector <int> nums{3,2,3,1,2,4,5,5,6};
    // nums = [3,2,1,5,6,4], k = 2
    cout<<findKthLargest(nums,4)<<endl;

    for(int i=0;i<9;i++){
        cout<<nums[i]<<" ";
    }

    
    return 0;
}