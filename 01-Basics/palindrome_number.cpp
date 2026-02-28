// Palindrome Number
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,orginal_num,digit;
    cin>>n;
    orginal_num=n;
    while (n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(rev==orginal_num){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
