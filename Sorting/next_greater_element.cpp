/*
    Program: Next Greater Element
    Description:
    This program finds the next greater element for
    each element in the array.

    - For every element, the program searches to the right
      for the first greater element.
    - If no greater element exists, it prints -1.

    Example:
    Input:  4 5 2 10
    Output: 5 10 10 -1

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int fl=0,n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    int fl=0;
	    for(int j=i+1;j<n;j++){
	        if(arr[j]>arr[i]){
	            cout<<arr[j]<<" ";
	            fl=1;
	            break;
	        }
	        
	    }
	    if(fl==0){
	       cout<<-1<<" ";
	    }
	    
	    
	}
	

}
