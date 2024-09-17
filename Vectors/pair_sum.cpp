#include<bits/stdc++.h>
using namespace std;


vector<int>pair_sum(vector<int>nums, int size, int target){
    vector<int>vec;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j]==target){
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
    }
    return vec;
}

int main(){

    vector<int>nums = {1,3,6,2,7};
    int target;
    cout<<"Enter target element: ";
    cin>>target; 
    int size = nums.size();

    vector<int>vec= pair_sum(nums,size, target);
    cout<<vec[0]<<vec[1];
    
    
    return 0;
}