/*
1
2 3
4 5 6 
7 8 9 10
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
}