#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && (arr[j-1])>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n=5;
    int arr[]={4,1,5,2,3};
    InsertionSort(arr,n);
    printArray(arr,n);
    return 0;
}