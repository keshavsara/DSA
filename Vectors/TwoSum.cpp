#include<iostream>
#include<vector>
using namespace std;

vector<int>twosum(vector<int> nums,int target)
{
    vector<int>vec;
    int i =0,j=nums.size()-1;
    while(i<j)
    {
        int twosum=nums[i]+nums[j];
        if(twosum>target)
        {
            j--;
        }
        else if(twosum<target)
        {
            i++;
        }
        else{
            vec.push_back(i);
            vec.push_back(j);
            return vec;
        }
    }
    return vec;
}

int main()
{
    vector<int>nums;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter value of vector :";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Elements in vector are :";
    for(int val:nums)
    {
        cout<<val<<" ";
    }

    int target;
    cout<<"enter target :";
    cin>>target;

    vector<int>vec=twosum(nums,target);
    cout<<vec[0]<<","<<vec[1]<<endl;
    return 0;
}