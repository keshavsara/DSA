#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    int sum=0;
    while(n>0)
    {
        int last_digit = n%10;
        sum = sum+last_digit;
        n= n/ 10;

    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    cout<<"Sum is: "<< Sum(n) <<endl;
}
