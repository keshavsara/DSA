#include<iostream>
using namespace std;

bool PairSum(int arr[], int n, int target, int &i, int &j) {
    i = 0;
    j = n - 1;
    while (i < j) {
        int ps = arr[i] + arr[j];
        if (ps > target) {
            j--;
        } else if (ps < target) {
            i++;
        } else {
            return true; 
        }
    }
    return false;  
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Enter the elements in an array: \n";
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter target: ";
    cin >> target;

    int i, j;
    if (PairSum(arr, n, target, i, j)) {
        cout << "Pair found at indices: " << i << " and " << j << endl;
    } else {
        cout << "No pair found.\n";
    }

    return 0;
}
