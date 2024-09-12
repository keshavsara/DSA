#include<bits/stdc++.h>
using namespace std;

int BinToDec(int decnum)
{
    int ans=0,pow=1;
    while(decnum>0)
    {
        int rem=decnum%10;
        decnum/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}

int main()
{
    int decnum;
    cout<<"Enter a Decimal no "<<endl;
    cin>>decnum;
    cout<<BinToDec(decnum)<<endl;
    return 0;
}
