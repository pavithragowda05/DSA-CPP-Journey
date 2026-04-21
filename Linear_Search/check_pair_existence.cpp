// Solved CodeChef problem: Check if a given pair exists in the list (order-independent)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,f=0;
	cin>>n;
	pair<int,int> arr[n];
	for(int i=0;i<n;i++){
	    cin >>arr[i].first>>arr[i].second;
	}
	cin>>a>>b;
	for(int i=0;i<n;i++){
	    if(arr[i].first==a && arr[i].second==b||arr[i].first==b &&arr[i].second==a){
	        cout<<"Yes";
	        f=1;
	        break;
	        }
	}
	if(f!=1){
	    cout<<"No";
	}
	

}
