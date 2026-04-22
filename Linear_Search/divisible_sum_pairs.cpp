// Program to print pairs whose sum is divisible by k
// Input: n (number of pairs), k (divisor), followed by n pairs
// Output: pairs (a, b) such that (a + b) % k == 0
#include <bits/stdc++.h>
using namespace std;
void Divisiblesum(int n,int k){
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        std::cin >> arr[i].first>>arr[i].second;
        if((arr[i].first+arr[i].second)%k==0){
            cout<<"("<<arr[i].first<<", "<<arr[i].second<<")"<<"\n";
        }
    }
}
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	Divisiblesum(n,k);

}
