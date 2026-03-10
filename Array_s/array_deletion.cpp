/*
Problem: Delete an element from an array at a given index
Concept: Array Deletion (Shifting Elements Left)
Language: C++
*/

#include <iostream>
using namespace std;

int main() {

    int arr[100] = {2, 4, 6, 8, 10};
    int size = 5;

    int positionToDelete = 2; // index to delete

    // Shift elements left
    for (int i = positionToDelete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce array size
    size--;

    // Print updated array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
