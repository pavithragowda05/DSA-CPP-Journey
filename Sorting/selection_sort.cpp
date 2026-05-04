/*
    Program: Selection Sort
    Description:
    This program sorts an array in ascending order
    using the Selection Sort algorithm.

    Algorithm:
    - Finds the minimum element in the unsorted part
    - Swaps it with the current position
    - Repeats until the array is sorted

    Time Complexity:
    - Best Case: O(n^2)
    - Average Case: O(n^2)
    - Worst Case: O(n^2)

*/
void selectionSort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        int min_idx = i;

        for(int j = i + 1; j < n; j++) {

            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}
