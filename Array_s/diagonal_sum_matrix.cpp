#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,sum=0;
	cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    // int matrix[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>matrix[i][j];
	    }
	}
	for(int i=0;i<n;i++){
	    sum+=matrix[i][i];
	    sum+=matrix[i][n-i-1];
	    
	}
	if(n%2 !=0){
	    sum -= matrix[n/2][n/2];
	}
    cout<<sum;

}
