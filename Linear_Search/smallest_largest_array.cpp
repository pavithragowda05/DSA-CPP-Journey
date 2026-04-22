// Program to find the smallest and largest elements in an array
// Input: n (size of array) and n elements
// Output: smallest and largest values
#include <bits/stdc++.h>
using namespace std;
void SmallestLargest(int n){
    
    int arr[n];
    int small=INT_MAX,large=INT_MIN;
    for(int i=0;i<n;i++){
        std::cin >>arr[i];
        if(arr[i]>large)
            large=arr[i];
        if(arr[i]<small){
            small=arr[i];
        }    
        
    }
    cout<<small<<" "<<large;
}
int main() {
	// your code goes here  
	int n;
	cin>>n;
	SmallestLargest(n);
	

}
