#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> vec,int target)
{
    // for (int i = 0; i < vec.size(); ++i)
    // {
    //     if(vec[i]==target)
    //     {
    //         return i;
    //     }
    // }
    // return -1;

    int index=0;
    for(int val: vec)
    {
        if(val==target)
        {
            return index;
        }
        index++;
    }
    return -1;
}

int main()
{
    vector<int>vec={1,3,5,15,16};
    int target;
    cout<<"Enter the target element u want to find "<<endl;
    cin>>target;
    cout<<linearSearch(vec,target);
    return 0;
}