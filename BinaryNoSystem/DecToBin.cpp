#include<bits/stdc++.h>
using namespace std;

int DecToBin(int decnum)
{
    int ans=0,pow=1;
    while(decnum>0)
    {
        int rem=decnum%2;
        decnum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}

int main()
{
    int decnum;
    cout<<"Enter a Decimal no "<<endl;
    cin>>decnum;
    cout<<DecToBin(decnum)<<endl;
    return 0;
}
