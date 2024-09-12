#include<bits/stdc++.h>
using namespace std;
int factn(int n)
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"Enter n to find factorial \n till n: ";\
    cin >>n;
    cout<<"factorial of "<<n << " is : "<<factn(n)<<endl;
    return 0;
}