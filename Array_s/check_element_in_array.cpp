/*
Problem: Check if a given element exists in an array
Concept: Linear Search
Language: C++
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    bool found = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == x) {
            found = true;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
