#include<iostream>
using namespace std;

void unique(int n, int arr[]){
    for(int i = 0;i<n;i++){
        bool unique= true;
        for(int j = 0;j<n;j++){
            if((i!=j) && (arr[i]==arr[j])){
                unique = false;
                break;
            }
        }
        if(unique)
        {
            cout<<arr[i]<<" ";
        }
    }
    
}


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The unique no in the array are :"<<endl;
    unique(n,arr);

}