#include <bits/stdc++.h>
using namespace std;

int stringsearch(string s,char c){
    int ln=s.size();
    for(int i=0;i<ln;i++){
        if(s[i]==c){
            return i;
        }
    }
    return -1;
}

int main() {
	// your code goes here
	string s;
	char c;
	cin>>s;
	cin>>c;
	int res=stringsearch(s,c);
    cout<<res;

}
