/*
    Program: Binary Search (Iterative)
    Description:
    This program performs binary search on a sorted array.
    It returns the index of the target element 'k' if found,
    otherwise returns -1.

    Note:
    - The input array must be sorted in ascending order.

    Author: Pavi
    Date: April 2026
*/
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k) {
    int left = 0, right = n-1;
    while (left <= right) {
        int middle = (left + right) / 2; 
        if (k==arr[middle]) {
            return middle;
        } else if (arr[middle] > k) {
            right=middle-1;
        } else {
            left=middle+1;
        }
    }
    return -1; // k not found
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << binary_search(arr, n, k) << endl;
    return 0;
}
