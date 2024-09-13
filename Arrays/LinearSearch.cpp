#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int sz,int target)
{
    for(int i=0;i<sz;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int sz;
    cout<<"Enter the size of Array\n";
    cin>>sz;
    int arr[sz];
    for(int i=0;i<sz;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target\n";
    cin>>target;
    cout<<"The Location at which the element is present is "<<linearsearch(arr,sz,target)<<endl;

}