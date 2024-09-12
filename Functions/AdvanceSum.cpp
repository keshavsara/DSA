#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b;

    cout<<"enter a: ";
    cin >> a;
    cout<<"enter b: ";
    cin>> b;

    cout<<"sum is : "<<sum(a,b);
}