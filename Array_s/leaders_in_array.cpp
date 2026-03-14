#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxRight = arr[n-1];

    // last element is always leader
    cout << maxRight << " ";

    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > maxRight) {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }

    return 0;
}
