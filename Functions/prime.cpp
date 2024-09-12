//Wap to check the number is prime is not with the help of function
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
    
    if (isPrime(n)) {
        cout << "The number is prime\n";
    } else {
        cout << "The number is not prime\n";
    }
    
    return 0;
}
