// Program: Valid Pair Finder
// Description:This program reads 'n' pairs of integers and a range [left, right].
// It prints the pairs whose:
//     - sum lies within the given range
//    - product also lies within the same range
#include <bits/stdc++.h>
using namespace std;
void ValidPair(int n){
    pair<int,int> arr[n];
    int left,right;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    cin>>left>>right;
    for(int i=0;i<n;i++){
        int sum=arr[i].first+arr[i].second;
        int product=arr[i].first*arr[i].second;
        if(sum>=left && sum<=right &&
        product>=left && product<=right){
            cout<<arr[i].first<<" "<<arr[i].second<<"\n";
        }
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	ValidPair(n);

}
