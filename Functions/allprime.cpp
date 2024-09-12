//Wap to print all the prime numbers from 1 to N.
#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are:\n";
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) { 
            cout << i << " "; 
        }
    }
    cout << endl; 

    return 0;
}
