/*
This program finds the index of the nth occurrence of a given character in a string.

Function:
- CharecterPosition(string s, char c, int occurrence)
  Returns the index of the specified occurrence of character 'c' in string 's'.
  If the character does not occur that many times, it returns -1.

Input:
- A string
- A character
- An integer representing the occurrence number

Output:
- Index of the nth occurrence of the character, or -1 if not found
*/
#include <bits/stdc++.h>
using namespace std;
int CharecterPosition(string s,char c,int accurence){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c)
            count++;
        if(count==accurence)
            return i;
    }
    return -1;
}

int main() {
	// your code goes here
	string s;
	char c;
	int accurence;
	cin>>s>>c>>accurence;
	int res=CharecterPosition(s,c,accurence);
	cout<<res;

}
