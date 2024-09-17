#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec(3,0);
    //cout<<vec.size()<<endl;

    vec.push_back(16);
    // vec.push_back(15);
    // vec.push_back(7);
    // vec.push_back(14);
    // vec.push_back(19);
    // vec.push_back(16);
    // vec.push_back(15);
    // vec.push_back(7);
    // vec.push_back(14);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    // vec.pop_back();

    // cout<<vec[0]<<endl;
    // cout<<vec.at(0)<<endl;

    // cout<<vec.front()<<endl;
    // cout<<vec.back();

    // cout<<vec.size()<<endl;

    // for(int val: vec)
    // {
    //     cout<<val<<" ";
    // }
}