//Print Factorial of a given no 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
    

    
}
