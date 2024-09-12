/*
1 2 3 4
1 2 3 4
1 2 3 4 
1 2 3 4
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

/*

* * * *
* * * *
* * * * 
* * * *

*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }


/*
A B C D
A B C D
A B C D
A B C D
*/
for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
/*
1 2 3
4 5 6 
7 8 9
*/
int count=1;
for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
/*
A B C
D E F 
I J K
*/
char ch='A';
for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
