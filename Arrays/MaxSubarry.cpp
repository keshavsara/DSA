#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void Subarray(vector<int>vec)
{
    int n=vec.size();
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++)
    {
        int currsum=0;
        for(int end=st;end<n;end++)
        {
            currsum += vec[end];
            maxsum=max(currsum,maxsum);

        }
    }
    cout<<"Max Subarray sum = "<<maxsum<<endl;
}
int main()
{
    vector<int>vec={1,2,3,4,5};
    Subarray(vec);
    return 0;

}