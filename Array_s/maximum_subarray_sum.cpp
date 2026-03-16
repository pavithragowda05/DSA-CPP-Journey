// This program finds the maximum sum of any contiguous subarray from a given array.

// Approach:
// - Use a brute force method to check all possible subarrays.
// - For each starting index, keep adding elements and track the maximum sum.
// - Time Complexity: O(n^2)

// Language: C++
// Platform: CodeChef

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >>t;
	// your code goes here
	while(t--){
	    cin>>n;
	    vector<int> arr(n);
	
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int large=INT_MIN;
	    for(int i=0;i<n;i++){
	        int sum=0;
	        for(int j=i;j<n;j++){
	            sum+=arr[j];
	            large=max(large,sum);
	        }
	       
	   }
	    cout<<large<<endl;
	}

}
