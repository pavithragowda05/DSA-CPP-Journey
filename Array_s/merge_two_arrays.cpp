/*
Problem: Merge two arrays into a single array
Concept: Arrays
Language: C++
*/

#include <iostream>
using namespace std;

int main() {

    int arr1[100] = {2, 4, 6};
    int size1 = 3;

    int arr2[100] = {8, 10, 12, 14};
    int size2 = 4;

    int mergedSize = size1 + size2;
    int mergedArray[100];

    // Copy first array
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Print merged array
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }

    cout << endl;

    return 0;
}
