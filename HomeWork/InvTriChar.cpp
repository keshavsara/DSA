/*
A A A A
  B B B 
    C C
      D
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
        char ch='A'+i;
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<"\n";
    }
}
