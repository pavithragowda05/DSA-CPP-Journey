/*
Problem: Insert an element into an array at a given position
Concept: Array Insertion
Language: C++
*/

#include <iostream>
using namespace std;

int main() {

    int arr[100] = {4, 5, 3, 10, 12, 18};
    int size = 6;

    int position = 5;  // index where element will be inserted
    int element = 7;   // element to insert

    // Shift elements to the right
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[position] = element;

    // Increase array size
    size++;

    // Print updated array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
