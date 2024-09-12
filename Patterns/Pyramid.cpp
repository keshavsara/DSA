/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1   
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n-i-1;j++)
        {
          cout<<"  ";  
        }
        
        for(j=0;j<i+1;j++)
        {
            cout<<j<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }
}