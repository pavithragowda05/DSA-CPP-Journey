#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k,flag=0;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
	    cin>> arr[i];
	    if(arr[i]==k)
	    flag=1;
	}
	if(flag==1)
	    cout<<"Yes";
	else
	    cout<<"No";

}
