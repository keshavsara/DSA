#include<iostream>
using namespace std;

int unique(int n, int arr[]){
    int check = 0;
    for(int i=0;i<n;i++){
        check = check + arr[i];
    }
    return check;
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
    
    cout<<"Unique element in array is: "<<unique(n,arr);;
    return 0;
}