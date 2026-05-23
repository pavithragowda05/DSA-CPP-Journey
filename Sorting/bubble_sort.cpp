/*
    Program: Bubble Sort
    Description:
    This program sorts an array in ascending order
    using the Bubble Sort algorithm.

    Algorithm:
    - Repeatedly compares adjacent elements
    - Swaps them if they are in the wrong order
    - Continues until the array is sorted

    Time Complexity:
    - Worst Case: O(n^2)
    - Best Case: O(n)
*/

// File Name: bubble_sort.cpp

#include <iostream>
using namespace std;

int main()
{
    int n, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
