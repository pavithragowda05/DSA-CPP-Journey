#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,p;
	cin>>m>>n;
	int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cin>>n>>p;
    int arr2[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[m][p];
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            arr3[i][j]=0;
            for(int k=0;k<n;k++){
            arr3[i][j] +=arr1[i][k]*arr2[k][j];
        }
    }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}
