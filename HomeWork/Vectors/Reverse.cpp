#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

   
    cout << "Original vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    reverse(vec.begin(), vec.end());

    // After reversing
    cout << "Reversed vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
