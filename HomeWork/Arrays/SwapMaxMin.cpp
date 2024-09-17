#include<bits/stdc++.h>
using namespace std;

int minimum(int n, int arr[]){
    int smallest=INT_MAX;
    int min_index = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
            min_index = i;
        }
    }
    return min_index;
}

int maximum(int n, int arr[]){
    int largest=INT_MIN;
    int max_index = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
            max_index = i;
        }
    }
    return max_index;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min_index = minimum(n,arr);
    int max_index = maximum(n,arr);
    
    swap(arr[min_index],arr[max_index]);

   cout<<"Elements in array after swapping min and max elements with each other: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}