// #include<iostream>
// using namespace std;
// void InsertionSort(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int curr = arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev] > curr)
//         {
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }

// void printArray(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int n=5;
//     int arr[]={4,1,5,2,3};
//     InsertionSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }


//Alternate Method(easy pizy)
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