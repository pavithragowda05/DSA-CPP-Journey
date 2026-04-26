/*
    Program: Search Insert Position
    Description:
    This function finds the index where a target element 'k' 
    should be inserted in a sorted array.

    - If the element exists, it returns its index.
    - If not, it returns the position where it can be inserted
      while maintaining sorted order.

    Approach:
    Uses Binary Search (O(log n))
*/
int search_insert_position(int arr[], int n, int k){
    int left=0,right=n-1,middle;
    while(left<=right){
    middle= (right + left) / 2;
    if(arr[middle]==k){
        return middle;
    }
    else if(arr[middle]>k){
        right=middle-1;
    }
    else{
        left=middle+1;
    }
    }
    return left;
}
