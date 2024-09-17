#include<iostream>
using namespace std;

int sum(int n, int arr[]){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int prod(int n, int arr[]){
    int prod =1;
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    return prod;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of all the elements in the array: "<<sum(n,arr)<<"\n";
    cout<<"product of all the elements in the array: "<<prod(n,arr);


    return 0;
}
