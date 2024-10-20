/*
n=4
*
* *
* * *
* * * *
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N :";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
/*
1
2 2
3 3 3
4 4 4 4
*/
for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }

/*
A
B B 
C C C
D D D D
E E E E E
*/
char ch='A';
for(int i =0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<"\n";
    }

/*
1
1 2
1 2 3
1 2 3 4
*/
for(int i =0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1<<" ";
        }
        
        cout<<"\n";
    }

/*
1
2 1
3 2 1
4 3 2 1
*/
for(int i =1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}