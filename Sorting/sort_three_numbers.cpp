/*
    Program: Sort Three Numbers
    Description:
    This program reads three integers and sorts them
    in ascending order without using any built-in
    sorting functions.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a>c){
	    std::swap(a, c);
	}
	if(a>b){
	    swap(a,b);
	}
	if(b>c){
	    swap(b,c);
	}
    cout<<a<<" "<<b<<" "<<c;

}
