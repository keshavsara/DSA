//Sum Of all numbers from 1toN which are divisible by 3.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0;
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum;
}