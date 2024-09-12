#include<bits/stdc++.h>
using namespace std;

int suM(int n)
{
   int sum=0;
   for(int i=1;i<=n;i++)
   {
    sum=sum+i;
   }
return sum;
}
int main()
{
    int n;
    cout<<"Enter the element till where u have to find sum : \n";
    cin>>n;
    
    cout<<"Sum of N no is:"<<suM(n)<<endl;
    return 0;
}