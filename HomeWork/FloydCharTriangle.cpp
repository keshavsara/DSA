/*
A
B C
D E F
G H I J 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }


A
B A
C B A
D C B A
*/
for(int i =0;i<n;i++)
    {
        
        char ch='A'+i;
        for(int j=i+1;j>0;j--)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<"\n";
    }
}