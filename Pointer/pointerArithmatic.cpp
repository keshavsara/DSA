#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr+=1;
    cout<<ptr<<endl;
    return 0;
}