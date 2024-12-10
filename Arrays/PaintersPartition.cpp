#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int>&arr,int n,int m,int maxAllowedWalls)
{
    int Painters=1,units=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxAllowedWalls)
        {
            return false;
        }
        if(units+arr[i]<=maxAllowedWalls)
        {
            units+=arr[i];
        }
        else{
            Painters++;
            units=arr[i];
        }
    }
    return Painters>m ? false:true;
}

int MinCost(vector<int> &arr, int n,int m)
{
    if(m>n) return -1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int st=0,end=sum;
    int ans=-1;
    if(m>n)
    {
        return -1;
    }
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            st=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4; 
    int m = 2; 
    cout<<"Minimum cost :" << MinCost(arr,n,m)<<endl;
    return 0;
}