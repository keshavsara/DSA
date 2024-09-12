#include <iostream>
using namespace std;
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
long long nCr(int n, int r) {
    if (r > n) return 0; 
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n ,r;
    cout<<"enter n and r";
    cin>>n>>r;
    cout << "nCr of " << n << " and " << r << " is: " << nCr(n, r) << endl;

}
